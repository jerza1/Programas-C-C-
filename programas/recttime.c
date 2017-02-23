#include <stdio.h>
#include <time.h>
main()
{
      int alto,ancho,i,j,k,seg=1;
      char simb;
      time_t actual,empezar;
      printf("Ingresa el ancho el alto y el simbolo\n");
      scanf("%d %d %c",&ancho,&alto,&simb);
      for(k=0;k<85;k++)
      {
          system("cls");
          for(i=0;i<alto;i++)
          {
             for(j=0;j<(k%85-ancho);j++)
             {
                printf(" ");
             }
             for(j=0;j<ancho;j++)
             {
                printf("%c",simb);
             }
             printf("\n");
          }
          time(&empezar);
          do
          {
             time(&actual);
          }while(actual<empezar+seg);
      }
      getch();
}
