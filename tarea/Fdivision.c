#include <stdio.h>
int division(int a, int b);
int main()
{
int a,b;
scanf("%d %d",&a,&b);
 printf("%d entre %d es = %d \n",a,b,division(a,b));
 system("Pause");
 return 0;
}
 int division(int i, int j)
{
    if(i<j)
    {
       return 0; 
       }
      return 1+division(i-j,j);
}
