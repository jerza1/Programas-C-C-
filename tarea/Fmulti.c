#include <stdio.h>
int multi(int b, int x);
int main()
{
int b,x;
scanf("%d %d",&b,&x);
 printf("%d X %d = %d \n",b,x,multi(b,x));
 system("Pause");
 return 0;
}
 int multi(int a, int b)
{
    if(b==1)
    {
       return a;
       }
      return a+multi(a,b-1); 
}
