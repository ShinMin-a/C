#include<stdio.h>  
#include<string.h>  
int main()  
{
    //输入
    char N[9999];  
    int i,p,e=0;  
    scanf("%s",&N);
    //计算和输出
    p=strchr(N,'E')-N+2;/*strchr(N,'E')-N+1为E的下标，再后面 位即使指数部分去掉符号的开始坐标*/
    for(i=p;i<strlen(N);i++)  
    {  
        e=e*10+N[i]-'0';  
    }  
    if(N[p-1]=='-')  
    {  
        e*=-1;  
    }  
    *strchr(N,'E')='\0';/*指数的信息已经得到，将E开始的指数部分截断*/  
    if(N[0]=='-')  
    {  
        printf("-");  
    }  
    if(e<0)/*小数点往前移，需要在前面加0*/   
    {  
        e*=-1;  
        printf("0.");  
        for(i=1;i<e;i++)  
        {  
            printf("0");  
        }  
        for(i=1;i<strlen(N);i++)  
        {  
            if(N[i]!='.')  
            {  
                printf("%c",N[i]);  
            }  
        }  
    }else if(e<(strlen(N)-3))/*小数点往后移动，且在数字部分中                          间*/  
    {  
        for(i=1;i<strlen(N);i++)  
        {  
            if(N[i]!='.')  
            {  
                printf("%c",N[i]);  
            }  
            if(i==e+2)  
            {  
                printf(".");  
            }  
        }  
    }else/*小数点在后面，不用打印'.'，需要在后面加0*/  
    {  
        for(i=1;i<strlen(N);i++)  
        {  
            if(N[i]!='.')  
            {  
                printf("%c",N[i]);  
            }  
        }  
        for(i=0;i<e-strlen(N)+3;i++)  
        {  
            printf("0");  
        }  
    }   
    return 0;  
}  
