#include <stdio.h>
int factorial(int n);
int main()
{
int n;
scanf("%d",&n);
 printf("El factorial de %d = %d\n",n,factorial(n));
 system("Pause");
 return 0;
}
 int factorial(int num)
{
    if(num==0)
    {
       return 1;
}
      return num*factorial(num-1);
}
