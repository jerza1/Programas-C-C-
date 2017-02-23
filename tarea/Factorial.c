/*Programa que imprime el factorial de un numero*/
#include <stdio.h>
int main()
{
 int num,fact=1,cont=1;
 printf("Ingresa el numero a calcular ");
 scanf("%d",&num);
 
 while(cont<=num)
 {
  fact=fact*cont;
  cont++;                 
 }
 printf("Factorial de (%d) = %d\n",num,fact);
 getch();
 return 0;
 }
           
