/*
http://www.icourse163.org/learn/ZJU-199001?tid=1002774001#/learn/ojhw?id=1003514009
1.初始化奇数偶数个数为0，临时存储数字的变量为0
2.接收一个整数，循环
3.为-1结束程序，输出奇偶数的个数
4.不是-1判断是奇偶，相应的变量加一
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int odd = 0;
	int even = 0;
	int num = 0;
	while(1)
	{
		scanf("%d", &num);
		if(num == -1){break;}
		else
		{
			if(num%2==0){even++;}
			else{odd++;}
		}
	}
	
	printf("%d %d", odd, even); 

	return 0;
}
