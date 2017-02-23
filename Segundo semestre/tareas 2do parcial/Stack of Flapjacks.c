#include <stdio.h>

void selectionSort(int A[], int menor, int n){
int i, aux, j;
for(i = 0; i < n-1; i++){
      menor = i;
      for(j = i+1; j < n; j++)
         if(A[j] < A[menor])
            menor = j;
      if(menor != i){
         aux = A[i];
         A[i] = A[menor];
         A[menor] = aux;
         }
   } 
}

int main(){
    
    return 0;
}
