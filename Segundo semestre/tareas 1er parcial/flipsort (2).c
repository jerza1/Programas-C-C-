#include <stdio.h>

int flipSort(int N[], int TAM);

int main(){
    int i, j=0, e, F[1000], flip=0,C[50];
    
    printf("\n");
    scanf("%d", &e); //elementos
    
    while(e != -1) {

    for(i=0; i<e;i++) // elementos de entrada
          scanf("%d", &F[i]);
    
    flip= flipSort(F, e);
    C[j++]= flip;
    
    scanf("%d", &e);  // elementos
    }
    
    for(i=0; i<j;i++){
    printf("\nLos intercambios minimos son: %d", C[i]);
    }
    
    getche();
    return 0;
}  

int flipSort(int N[], int TAM){
   int i, j, aux, flips=0;
   
   for (i=TAM-1; i >0; i--){
      for (j=0; j <= i-1; j++){
         if (N[j] > N[j+1]){
            aux = N[j+1];
            N[j+1] = N[j];
            N[j] = aux;
            flips++;
         }
      }
   }
  return flips;
}
