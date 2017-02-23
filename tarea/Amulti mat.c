#include <stdio.h>
int main()
{
    int i,j,k,Af,Ac,Bf,Bc;
    int **A,**B,**C;
    printf("Ingresa el tamanio de la matriz A(filas,columnas)\n");
    scanf("%d %d",&Af,&Ac);
    printf("Ingresa el tamanio de la matriz B(filas,columnas)\n");
    scanf("%d %d",&Bf,&Bc);
    if(Ac==Bf)
    {
    printf("Ingresa valores de la matriz A\n");
    for(i=0; i < Af ;i++)
        for(j=0; j < Ac ;j++)
            scanf("%d",A[i][j]);
    printf("Ingresa valores de la matriz B\n");
    for(i=0;i<Bf;i++)
    {
        for(j=0;j<Bc;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<Af;i++)
    {
        for(j=0;j<Bc;j++)
        {
            C[i][j]=0;
            for(k=0;k<Ac;k++)
                {
                   C[i][j]=C[i][j]+A[i][k]*B[k][j];
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
