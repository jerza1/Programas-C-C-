#include <stdio.h>
main()
{
      int lado,carac,i,j;
      printf("Ingresa el lado y el caracter\n");
      scanf("%d %c",&lado,&carac);
      for(j=0;j<lado;j++)
      {
          for(i=0;i<lado;i++)
          {
               if(j>i)
                 printf(" ");
               else
                printf("%c",carac);
          }
         printf("\n");
      }
       getch();
       }
