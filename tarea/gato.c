#include <stdio.h>
#define equis 1
#define circulo 2
int main()
{
    int i,j,band=0,n;
    int M[3][3]={0};
    for(i=0;i<3;i++)
         {
         for(j=0;j<3;j++)
         {
                         for(n=0;M[i][j]==0;i++,j++){n=n+1;}
         }
         }
         if(n<9)           
{printf("Empates!!!\n");}
system("Pause");
return 0;
}
