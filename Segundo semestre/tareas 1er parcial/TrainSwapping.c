#include <stdio.h>

int burbuja(int N[], int TAM);

int main(){
    int p, v, i, c=0, j, T[50], *C;
    
    printf("\t**Train Swapping**\n\n");
    printf("Ingrese el numero de casos de prueba: ");
    scanf("%d", &p);
    j=p;
    C= (int*) malloc(p * sizeof(int));
    while(p != 0){ 
       printf("\nIngrese el numero de vagones: ");
       scanf("%d", &v);
       printf("\nOrden actual de los vagones: \n");
       for(i=0; i<v;i++)
          scanf("%d", &T[i]);
       
       C[c++]= burbuja(T,v); 
       p--;
    }

    for(i=0; i<j;i++){
    printf("\nEl intercambio optimo de trenes toma %d cambios", C[i]);
    }
    
    free(C);
    getche();
    return 0;
}  

int burbuja(int N[], int TAM)
{
  int i, j, aux, C=0;
  for (i=TAM-1; i >0; i--)
  {
    for (j=0; j <= i-1; j++)
    {
      if (N[j] > N[j+1])
      {
        aux = N[j+1];
        N[j+1] = N[j];
        N[j] = aux;
        C++;
      }
    }
  }
  return C;
}
