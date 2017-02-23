#include <stdio.h>
int main()
{
    int fil,col,i,j,s;
    int A[100][100],B[100][100],C[100][100];
    printf("Ingresa el tamanio de la matriz (filas,columnas)\n");
    scanf("%d %d",&fil,&col);
    printf("Ingresa valores de la matriz A\n");
    for(i=0;i<fil;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Ingresa valores de la matriz B\n");
    for(i=0;i<fil;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<fil;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<fil;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    system("Pause");
    return 0;
}
