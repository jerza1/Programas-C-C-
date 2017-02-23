#include <stdio.h>
int main()
{
 int num, fib1=1, fib2=0, cont, fib=0;
 printf("Ingresa el numero a calcular "),
 scanf("%d",&num);
 for(cont=1;cont<=num;cont=cont+1)
 {
     fib=fib1+fib2;
     fib2=fib1;
     fib1=fib;
 }
 printf("Fibonaci de (%d)= %d\n",num,fib);
 system("Pause");
 return 0;
 }
                                
