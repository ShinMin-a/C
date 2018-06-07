/*
http://www.icourse163.org/learn/ZJU-199001?tid=1002774001#/learn/ojhw?id=1003553200
分队列
1.接收整数n，表示班级人数
2.从1到n循环，输出奇数
3.输出结果在同一行，用空格分开，最后一个没有空格
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = 0;
	int i = 1;
	scanf("%d", &n);
	while(i <= n)
	{
		if(i%2 != 0 && i==n){printf("%d", i);}
		else if(i%2 != 0 && (i+1) == n){printf("%d", i);}
		else if(i%2 != 0 && (i+1) != n){printf("%d ", i);}
		i++;
	} 

	return 0;
}
