#include <stdio.h>

int burbuja(int A[], int tam);

int main(){
    int i, cont = 0, num, A[1000], flips = 0, C[50];
    
    printf("Numeros de casos > 0 \n");
    scanf("%d",&casos);
   
    while(casos > 0) {
    
    printf("Ingresar numeros\n");
    for(i = 0; i < num; i++)
        scanf("%d",&A[i]);
    
    flips = burbuja(A, num);
    C[cont++] = flips;
    
    printf("Numeros a leer\n");
    scanf("%d",&num);
    }
    
    for(i = 0; i < cont; i++)
    printf("\nLos intercambios minimos son: %d", C[i]);
    
    return 0;
}  

int burbuja(int N[], int TAM){
   int i, j, aux, cont = 0;
   
   for (i = TAM-1; i >0; i--)
      for (j = 0; j <= i-1; j++)
         if (N[j] > N[j+1]){
            aux = N[j+1];
            N[j+1] = N[j];
            N[j] = aux;
            cont++;
         }
  return cont;
}
