//写出这个数
/*
https://github.com/OliverLew/PAT/blob/master/PATBasic/1002.c
使用switch：
https://www.oschina.net/code/snippet_858948_25276
*/

#include <stdio.h>
#include <string.h>

int main(){
  char c[101];
  char pinyin[][9]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  int  a[10];
  int i,n=0,t=0;
  gets(c);//读入一串字符。这里实际上是数据，但是由于是char类型的，由ASCII码可以进行转换
  for(i=0;i<strlen(c);i++)
    n=n+c[i]-'0';//当成字符类型读入时转换成数字类型要减去0的ASCII码
  while(n!=0){
    a[t]=n%10;//用a[]数组存储n由低到高的每个数字
    n=n/10;
    t++;}
  printf("%s",pinyin[a[t-1]]);//数字到拼音的转换，拼音由二维数组存起来的，注意最高位的索引值是t-1而不是t
  for(i=t-2;i>=0;i--)
      printf(" %s",pinyin[a[i]]);
  return 0;
}
