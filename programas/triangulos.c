#include <stdio.h>
int main ()
{
  int l1,l2,l3,sum,dif;
  scanf("%d %d %d",&l1,&l2,&l3);
  sum=l2+l3;
  dif=l2-l3;
  if(l1<sum && l1>dif)
      printf("Es un triangulo\n");
      else
      printf("No es triangulo\n");
  system("Pause");
  return 0;
}
