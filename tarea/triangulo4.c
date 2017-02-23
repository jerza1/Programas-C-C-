#include <stdio.h>
int main()
{
      int lado,i,j;
      char carac;
      printf("Ingresa el lado y el caracter\n");
      scanf("%d %c",&lado,&carac);
      for(j=0;j<lado;j++)
      {
         for(i=0;i<lado;i++)
            {
              if(i<lado-j-1)
               {
                 printf(" ");
               }
              else
               {
                 printf("%c",carac);
               }
            }
      printf("\n");
      }
system("pause");
return 0;
}
