#include <stdio.h>
int main()
{
    int i,j,Afil,Acol,Bfil,Bcol,z;
    int A[100][100],B[100][100],C[100][100];
    printf("Ingresa el tamanio de la matriz A(filas,columnas)\n");
    scanf("%d %d",&Afil,&Acol);
    printf("Ingresa el tamanio de la matriz B(filas,columnas)\n");
    scanf("%d %d",&Bfil,&Bcol);
    if(Acol==Bfil)
    {
    printf("Ingresa valores de la matriz A\n");
    for(i=0;i<Afil;i++)
    {
        for(j=0;j<Acol;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Ingresa valores de la matriz B\n");
    for(i=0;i<Bfil;i++)
    {
        for(j=0;j<Bcol;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<Afil;i++)
    {
        for(j=0;j<Bcol;j++)
        {
            C[i][j]=0;
            for(z=0;z<Acol;z++)
                {
                   C[i][j]=C[i][j]+A[i][z]+B[z][j];
                }
                printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}
else
    {
        printf("Coloumna A no coincide con Filas B\n");
    }
system("Pause");
return 0;
}
