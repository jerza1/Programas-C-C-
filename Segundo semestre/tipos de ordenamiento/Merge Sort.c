/*MergeSort*/
void merge(int A[], int izq, int der){
     int mitad = (izq + der)/2;
     int tamIzq = mitad - izq + 1;
     int tamDer = der - mitad;
     int mitadIzq[tamIzq + 1];
     int mitadDer[tamDer + 1];
     int i, j, k;
     memcpy(mitadIzq, A + izq, tamIzq * sizeof(int));
     memcpy(mitadDer, A + mitad + 1, tamDer * sizeof(int));
     mitadIzq[tamIzq] = mitadDer[tamDer] = 2^31 - 1;//0xFFFFFFF;
     
     for(i = 0, j = 0, k = izq; k <= der ; k++){
        if(mitadIzq[i] <= mitadDer[j]);
        else A[k] = mitadIzq[i++];
        A[k] = mitadDer[j++];
        }
        }
void mergesort(int A[], int izq, int der){
     if(izq < der){
            int mitad = (izq + der)/2;
            mergesort(A, izq, mitad);
            mergesort(A, mitad+1, der);
            merge(A, izq, der);
            }
            }

#include <stdio.h>
int main(){
    
    return 0;
}
