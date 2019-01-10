#include<stdio.h>
#include<string.h>
#define SIZE 1001
int main(void)
{
        char A[SIZE];
        int B,Q;
        scanf("%s %d",A,&B);
        R = 0;//R为余数

        for(int i = 0;i<strlen(A);i++)
        {   
                int D = ( A[i] -'0') + Q* 10; 
                if( D >= B ) 
                {    
                        printf("%d",D/B);
                        R = D % B;
                }
                else
                {
                        if(strlen(A)==1)        printf("0");//A为小于B的个位数
                        else if(i)              printf("0");
                        R = D;
                }
        }
        printf(" %d\n",R);
        return 0;
}
