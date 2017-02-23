#include <stdio.h>
int main()
{
 int num, fib[1000],i;
 scanf("%d",&num);
 fib[0]=1;fib[1]=1;
 for(i=2;i<=1000;i++)
 {
 fib[i]=fib[i-1]+fib[i-2];
 }
 printf("Fibonaci de (%d)= %d\n",num,fib[num]);
 system("Pause");
 return 0;
 }
