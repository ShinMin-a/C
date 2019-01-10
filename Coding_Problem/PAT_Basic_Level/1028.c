/*
1028 人口普查（20 分）
某城镇进行人口普查，得到了全体居民的生日。现请你写个程序，找出镇上最年长和最年轻的人。

这里确保每个输入的日期都是合法的，但不一定是合理的——假设已知镇上没有超过 200 岁的老人，而今天是 2014 年 9 月 6 日，所以超过 200 岁的生日和未出生的生日都是不合理的，应该被过滤掉。

输入格式：
输入在第一行给出正整数 N，取值在(0,10^5]；随后 N 行，每行给出 1 个人的姓名（由不超过 5 个英文字母组成的字符串）、以及按 yyyy/mm/dd（即年/月/日）格式给出的生日。题目保证最年长和最年轻的人没有并列。

输出格式：
在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。
输入样例：
5
John 2001/05/12
Tom 1814/09/06
Ann 2121/01/30
James 1814/09/05
Steve 1967/11/20
输出样例：
3 Tom John
*/

#include <stdio.h>
#include <string.h> 

int bigger(char a[20], char b[20])
{
    int i=0;
    for(i=0;i<10;i++)
    {
        if(a[i]-b[i]>0)
            return 1;//在c里0为假，1为真。
                     //在底层0为真，1为假。
                     //在java里0，1不能表示真假。
        if(a[i]-b[i]<0)
            return 0;
    }
    return 0;
}

int main()
{
    int n,i,count=0;
    char a[10],old[10],young[10];
    char b[20],big[20]="1814/09/05",small[20]="2014/09/07";
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%s %s",a,b);
        if((bigger(b,"1814/09/05"))&&(bigger("2014/09/07",b)))
        {
            count++;
            if(bigger(b,big))
            {
                strcpy(big,b);//将b与big进行比较，年龄较大的赋
                strcpy(old,a);//值给big,同时a的姓名赋值给old
            }
            if(bigger(small,b))
            {
                strcpy(small,b);//将b与small进行比较，年龄较小
                strcpy(young,a);//给small，同时a的姓名赋值给young
            }
        }
    }
    if(count>0) 
        printf("%d %s %s\n",count,young,old);
    else 
        printf("0");
    return 0; 
}


