#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//use enum instead of const int
enum {NOUGHTS, CROSSES, BORDER, EMPTY};
enum {HUMANWIN, COMPWIN, DRAW};

const int Directions[4] = {1,5,4,6};

const int ConvertTo25[] = {
	6,7,8,
	11,12,13,
	16,17,18
};

const int InMiddle = 4;
const int Corners[4] = {0,2,6,8};

int ply = 0, positions = 0, maxPly =0;

int GetNumForDir(int startSq, const int dir, const int *board, const int us)
{
	int found = 0;
	while(board[startSq] != BORDER)
	{
		if(board[startSq] != us) break;
		found++;
		startSq += dir;
	}
	return found;
}

int FindThreeInARow(const int *board, const int ourindex, const int us)
{
	int DirIndex = 0;
	int Dir = 0;
	int threeCount = 1;

	for(DirIndex=0; DirIndex<4; DirIndex++)
	{
		Dir = Directions[DirIndex];
		threeCount += GetNumForDir(ourindex + Dir, Dir, board, us);
		threeCount += GetNumForDir(ourindex + Dir*-1, Dir*-1, board, us);
		if(threeCount==3) break;

		threeCount = 1;

	}
	return threeCount;
}

int FindThreeInARowAllBoard(const int *board, const int us)
{
	int threeFound = 0;;
	int i;
	for(i=0; i<9; i++)
	{
		if(board[ConvertTo25[i]] == us)
		{
			if (FindThreeInARow(board, ConvertTo25[i], us)==3)
			{
				threeFound = 1;
				break;
			}
		}
	}
	return threeFound;
}

int EvalForWin(const int *board, const int us)
{
	if(FindThreeInARowAllBoard(board, us) != 0)
		return 1;
	if(FindThreeInARowAllBoard(board, us^1) != 0)
		return -1;

	return 0;
}

int MinMax(int *board, int side)
{
	//check is win
	//generate all moves for side
	//loop moves, make move, MinMax() on move to get score
	//assess bestscore
	//end moves return bestscore

	int MoveList[9], MoveCount=0, bestScore = -2;
	int score = -2, bestMove = -1, Move, i;

	if(ply > maxPly)  maxPly = ply;
	positions++;

	if(ply > 0) 
	{
		score = EvalForWin(board, side);
		if(score != 0)  return score;
	}

	//fill move list
	for(i=0; i<9; i++)
	{
		if((board[ConvertTo25[i]] == EMPTY))
			MoveList[MoveCount++] = ConvertTo25[i];
	}

	//loop all moves
	for(i=0; i<MoveCount; i++)
	{
		Move = MoveList[i];
		board[Move] = side;

		ply++;
		score = -MinMax(board, side^1);
		if(score > bestScore)
		{
			bestScore = score;
			bestMove = Move;
		}
		board[Move] = EMPTY;
		ply--;
	}
	if(MoveCount==0)
	{
		bestScore = FindThreeInARowAllBoard(board, side);
	}

	if(ply != 0)
		return bestScore;
	else
		return bestMove;
}

void InitialiseBoard(int *board)
{
	int index = 0;

	for(index=0; index<25; index++)
	{
		board[index] = BORDER;
	}

	for(index=0; index<9; index++)
	{
		board[ConvertTo25[index]] = EMPTY;
	}
}

void PrintBoard(const int *board)
{
	int index = 0;
	char pceChars[] = "OX|-";
	printf("\n\nBorad:\n\n");
	for(index=0; index<9; index++)
	{
		if(index != 0 && index%3==0) printf("\n\n");
		printf("%4c", pceChars[board[ConvertTo25[index]]]);
	}
	printf("\n");
}

int HasEmpty(const int *board)
{
	int index=0;
	for(index=0; index<9; index++)
	{
		if(board[ConvertTo25[index]] == EMPTY) return 1;
	}
	return 0;
}

void MakeMove(int *board, const int sq, const int side)
{
	board[sq] = side;
}

int GetNextBest(const int *board)
{
	int ourMove = ConvertTo25[InMiddle];
	if(board[ourMove] == EMPTY)
	{
			return ourMove;
	}

	int i=0;
	ourMove = -1;

	for(i=0; i<4; i++)
	{
		ourMove = ConvertTo25[Corners[i]];
		if(board[ourMove]==EMPTY)
			break;
	}
	ourMove = -1;
	return ourMove;
}

int GetWinningMove(int *board, const int side)
{
	int ourMove = -1, winFound = 0, i=0;
	
	for(i=0; i<9; i++)
	{
		if(board[ConvertTo25[i]] == EMPTY)
		{
			ourMove = ConvertTo25[i];
			board[ourMove] = side;

			if(FindThreeInARow(board, ourMove, side) ==3)
			{
				winFound = 1;
			}
			board[ourMove] = EMPTY;
			if(winFound==1)
			{	
				break;
			}
			ourMove = -1;
		}

	}
	return ourMove;
}

int GetComputerMove(int *board, const int side)
{
	ply = 0;
	positions = 0;
	maxPly = 0;
	int best = MinMax(board, side);
	printf("Finished Searching positions:%d maxDepth:%d bestMove:%d\n", positions, maxPly, best);
	return best;
	/*
	int index = 0;
	int numFree = 0;
	int availableMove[9];
	int randMove = 0;

	randMove = GetWinningMove(board, side);
	if(randMove != -1)
		return randMove;

	randMove = GetWinningMove(board, side^1);
	if(randMove != -1)
		return randMove;

	randMove = GetNextBest(board);
	if(randMove != -1)
		return randMove;

	randMove = 0;
	for(index=0; index<9; index++)
	{
		if(board[ConvertTo25[index]] == EMPTY)
		{
			availableMove[numFree++] = ConvertTo25[index];
		}
	}

	randMove = (rand() % numFree);
	return availableMove[randMove];
	*/
}

int GetHumanMove(const int *board)
{
	char userInput[4];
	int moveOk = 0;
	int move = -1;

	while(moveOk==0)
	{
		printf("Please enter a move from 1 to 9: ");
		fgets(userInput, 3, stdin);
		
		fflush(stdin); //work well in codeblock
		/*
		int c;
		do{ //fflush(stdin) not working in Ubuntu
			c = getchar();
		}while(c!='\n' && c != EOF);
		*/
		if(strlen(userInput) != 2)
		{

			printf("Invalid strlen()\n");
			continue;
		}

		if(sscanf(userInput, "%d", &move) != 1)
		{
			move = -1;
			printf("Invalid sscanf()\n");
			continue;
		}

		if(move<1 || move>9)
		{
			move = -1;
			printf("Invalid range\n");
			continue;
		}

		move--; //Zero indexing

		if(board[ConvertTo25[move]] != EMPTY)
		{
			move = -1;
			printf("Square not available\n");
			continue;
		}
		moveOk = 1;
	}
	printf("Making move...%d\n", (move+1));
	return ConvertTo25[move];
}

void RunGame()
{
	int GameOver = 0;
	int Side = NOUGHTS; //human side
	int LastMoveMade = 0;
	int board[25];

	InitialiseBoard(&board[0]);
	PrintBoard(&board[0]);

	while(!GameOver)
	{
		if(Side==NOUGHTS){
			//get move from human, make move on board, change side.
			LastMoveMade = GetHumanMove(&board[0]);
			MakeMove(&board[0], LastMoveMade, Side);
			Side = CROSSES;
		}else{
			//get move from computer, make move on board, change side.
			LastMoveMade = GetComputerMove(&board[0], Side);
			MakeMove(&board[0], LastMoveMade, Side);
			Side = NOUGHTS;
			PrintBoard(&board[0]);
		}
		//if three in a row exists game is over.
		if(FindThreeInARow(board, LastMoveMade, Side ^ 1) == 3)
		{
			printf("Game over!\n");
			GameOver = 1;
			if(Side==NOUGHTS) printf("Computer Wins\n");
			else printf("Human Wins\n");
		}
		//if no more moves, game is a draw.
		if(!HasEmpty(board))
		{
			GameOver = 1;
			printf("Game over!\nIt's a draw.\n");
		}
	}
	PrintBoard(&board[0]);
}

int main()
{
	srand(time(NULL));
	RunGame();

	return 0;
}
