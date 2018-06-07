/*
http://www.icourse163.org/learn/ZJU-199001?tid=1002774001#/learn/ojhw?id=1003553200
BJT转换成UTC
1.输入一个整数: bjt;
2.如果>=800, utc = bjt - 800;
3.否则：utc = 2400 + (bjt - 800);
4.输出utc
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int bjt = 0;
	int utc = 0;
	scanf("%d", &bjt);
	if(bjt >= 800)
	{
		utc = bjt - 800;
	}else
	{
		utc = 2400 + (bjt - 800);
	}
	
	printf("%d\n", utc);

	return 0;
}
