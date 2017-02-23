#include <stdio.h>
main()
{
      int lado,carac,i,j;
      printf("Ingresa el lado y el caracter\n");
      scanf("%d %c",&lado,&carac);
      printf("\n");
      for(i=0;i<lado;i++)
      {
          for(j=0;j<=i;j++)
             printf("%c",carac);
       printf("\n");
      }
getch();
}
