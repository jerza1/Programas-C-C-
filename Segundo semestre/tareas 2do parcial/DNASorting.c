#include <stdio.h>
#include <stdlib.h>
int burbuja(char [][], int, int);

int main(){
    int datos, carac, cad, i, j;
    do{
       printf("Numero de conjuntos de datos? > 0:\n ");
       scanf("%d",&datos);
       }while(datos < 0);

    printf("\nIngresar numero de caracteres y numero de cadenas: ");
    scanf("%d %d",&carac,&cad);
    char ADN[carac][cad];
    
    for(i = 0; i < cad; i++){
        printf("ADN[%d][%d] = ", i, j++);
        scanf("%d",&carac,&cad);
        }
       
    return 0;
}
/*void burbuja(int A[][], int fil, int col){
  int i, j, aux;
 
  for (i = fil-1; i >0; i--)
    for (j = 0; j <= i-1; j++)
      if (A[j] > A[j+1])
      {
        aux = A[j+1];
        A[j+1] = A[j];
        A[j] = aux;
      }
}
*/
