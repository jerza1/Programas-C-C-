#include <stdio.h>
main()
{
      int lado,carac,i,j;
      printf("Ingresa el lado y el caracter\n");
      scanf("%d %c",&lado,&carac);
      for(i=1;i<=lado;i++)
      {
         for(j=lado;i<=j;j--)
             printf("%c",carac);
         printf("\n");
      }
getch();
}
