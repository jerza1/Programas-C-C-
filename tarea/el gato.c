#include <stdio.h>
#define equis 1
#define circulo 2
int main()
{
    int i,j,jug=equis,band=0,k,n,m;
    int M[3][3]={0};
        do{
        for(j=0;j<3;j++)
        {
           for(i=0;i<3;i++)
           { 
              if(M[j][i]==equis)
              {
                 printf("X\t");
              }
              else if(M[j][i]==circulo)
              {
                 printf("O\t");
              }
              else
              {
                  printf("%d,%d\t",j+1,i+1);
              }
           }
           printf("\n");
        }
        if(jug==equis)
        {
                      printf("\nJugador X ingresa las coordenadas (x,y)\n");
                      scanf("%d %d",&j,&i);
                      if(i>0&&j>0&&i<=3&&j<=3&&M[j-1][i-1]==0)
                      {
                      M[j-1][i-1]=equis;
                      jug=circulo;
                      }
        }
        else if(jug==circulo)
        {
             printf("\nJugador O ingresa las coordenadas (x,y)\n");
             scanf("%d %d",&j,&i);
             if(i>0&&j>0&&i<=3&&j<=3&&M[j-1][i-1]==0)
             {
                   M[j-1][i-1]=circulo;
                   jug=equis;
             }
        }
        for(k=0;k<3;k++)//Busca la cadena en HORIZONTAL izquierda a derecha hacia abajo//
         {
                             for(m=0;M[k][m]==equis;m++);
                             if(m>=3)
                             {band=1;}
                             for(m=0;M[k][m]==circulo;m++);
                             if(m>=3)
                             {band=2;}
         }
         for(m=0;m<3;m++)//Busca la cadena en VERTICAL izquierda a derecha hacia abajo//
         {
                             for(k=0;M[k][m]==equis;k++);
                             if(k>=3)
                             {band=1;}
                             for(k=0;M[k][m]==circulo;k++);
                             if(k>=3)
                             {band=2;}
         }
         for(k=0;k<1;k++)//Busca la cadena en diagonal izquierda a derecha hacia abajo// 
         {
                             for(m=0;M[k][m]==equis;k++,m++);
                             if(m>=3)
                             {band=1;}
                             for(m=0;M[k][m]==circulo;k++,m++);
                             if(m>=3)
                             {band=2;}
         }
         for(k=0;k<1;k++)//Busca la cadena en diagonal izquierda a derecha hacia abajo// 
         {
                             for(m=2;M[k][m]==equis;k++,m--);
                             if(m<0)
                             {band=1;}
                             for(m=2;M[k][m]==circulo;k++,m--);
                             if(m<0)
                             {band=2;}
         }
         for(i=0;i<3;i++)
         {
            for(j=0;j<3;j++)
               {
                         for(n=0;M[i][j]==0;j++)
                         {
                         n=n+1;
                         }
               }
         }
         if(n==0)
         {
           band=3;
         }           
}while(band==0);
if(band==1)
{
    printf("Ganaron las X\n");
}
else if(band==2)
{
     printf("Ganaron los O\n");
}
else
{
     printf("Empate\n");
}
system("Pause");
return 0;
}
