/*
http://www.icourse163.org/learn/ZJU-199001?tid=1002774001#/learn/ojhw?id=1003514009
数字特征值
1.定义变量：整数num，第某位数n，n所在位置的数字x，特征值e
2.接收一个整数赋值给num
3.循环，n++, x=num%10
4.判断n和x的奇偶性，相应值赋值给e
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int num = 0, n = 0, x = 0, e = 0;	
	scanf("%d", &num);
	while(1)
	{
		n++;
		x = num % 10;
	}
	
	return 0;
}
