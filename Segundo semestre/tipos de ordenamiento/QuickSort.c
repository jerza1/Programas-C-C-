/*void intercambio(int a, int b){
     int aux = a;
     a = b;
     b = aux;
     }*/
void quicksort(int A[], int izq, int der){
     if(izq < der){
        int aleatorio = izq + rand() % (der- izq +1);
        int aux = A[aleatorio];
        A[aleatorio] = A[der];
        A[der] = aux;
        int q = partition(A, izq, der);
        quicksort(A, izq, q-1);
        quicksort(A, q, der);
     }
}
int partition(int A[], int izq, int der){
    int i, j, aux, pivote = A[der];
    for(i = izq - 1, j = izq; j < der; j++){
       if(A[j] <= pivote){
          i++;
          aux = A[i];
          A[i] = A[j];
          A[j] = aux;
       }
    }
    i++;
    A[der] = A[i];
    A[i] = pivote;
    return i;
}

#include <stdio.h>
int main(){
    int A[] = {13,14,20,25,95,55,70,90,40};
    int  i;
    
    quicksort(A, 0, 8);
    
    for(i = 0; i < 9; i++)
          printf("%d  ", A[i]);
    
    return 0;
}
