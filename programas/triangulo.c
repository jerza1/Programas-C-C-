#include <stdio.h>
int main()
{
  int lado1,lado2,lado3;
  scanf("%d %d %d",&lado1,&lado2,&lado3);
  if(lado1==lado2 && lado2==lado3)
      printf("Es equilatero\n");
  else if(lado1==lado2 || lado2==lado3 || lado1==lado3)
      printf("Es isoceles\n");
  else
      printf("Es escaleno\n");
      system("Pause");
  return 0;
}
