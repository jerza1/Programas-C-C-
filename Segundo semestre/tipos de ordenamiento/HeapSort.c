void maxHeapify(int A[], int i, int heapsize){
     int hizq = 2*i+1;
     int hder = 2*1+2;
     int mayor = i;
     if(hizq <= heapsize && A[hizq] > A[mayor])
       mayor = hizq;
     if(hder <= heapsize && A[hder] > A[mayor])
        mayor = hder;
     if(i != mayor){
          int aux = A[i];
          A[mayor] = aux;
          maxHeapify(A, mayor, heapsize);
           }
     }
void buildMaxHeap(int A[], int izq, int der){
     int i;
     for(i = (der-1)/2; i >= 0; i--)
           maxHeapify(A, i, der);
           }
void heapSort(int A[], int izq, int der){
     buildMaxHeap(A, izq, der);
     int i, aux;
     for(i = der; i > izq; i--){
           aux = A[izq];
           A[izq] = A[der];
           A[der] = aux;
           }
           maxHeapify(A, izq, i-1);
           }
#include <stdio.h>
int main(){
    
    return 0;
}
