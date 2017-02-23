#include <stdio.h>
#define jerza 1
#define otro 2
int main()
{
    int x,y,i,j,cr1,cr2,tur=jerza,punt=0;
    char M[4][5]={
         {"RABD"},
         {"GBCE"},
         {"FCDE"},
         {"AFGR"}};
         printf("Programa\n");
         for(i=0;i<4;i++)
         {
         for(j=0;j<5;j++)
         {printf("%c",M[i][j]);}
         printf("\n");}
         printf("Ingresa las coordenadas\n");
         scanf("%d %d",&x,&y);
         if(M[x][y]==M[i][j])
         {
                             punt=punt+1;
         }
         else{
              tur=otro;
              }
         system("Pause");
         return 0;
         }
         
         
