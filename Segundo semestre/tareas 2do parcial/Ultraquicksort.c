#include<stdio.h>
#include<stdlib.h>

int merge(int A[],int izq,int der);
int mergesort(int A[],int izq,int der);

int main(){
    int i, A[500000], num, cont = 0, C[100], aux = 0;
   
   printf("Numeros a leer: \n");
   scanf("%d",&num); 
   
   while(num != 0){
        printf("Ingresar numeros: \n");
        for(i=0;i<n;i++)  
           scanf("%d",&A[i]);
      
        c = mergesort(A,0,n-1);
        C[j++] = c;
        printf("Numeros a leer: \n");
        scanf("%d",&n); 
       }
   for(i = 0; i < j; i++)
      printf("\nIntercambios necesarios: %d",C[i]);
   
   return 0;
}

int mergesort(int A[], int izq, int der){
    int cont = 0;
     if(izq < der){
            int mitad = (izq + der)/2;
            cont += mergesort(A, izq, mitad);
            cont += mergesort(A, mitad+1, der);
            cont += merge(A, izq, der);
            }
     return cont;
}
            
int merge(int A[], int izq, int der){
     int mitad = (izq + der)/2;
     int tamIzq = mitad - izq + 1;
     int tamDer = der - mitad;
     int mitadIzq[tamIzq + 1];
     int mitadDer[tamDer + 1];
     int i, j, k, cont = 0;
     memcpy(mitadIzq, A + izq, tamIzq * sizeof(int));
     memcpy(mitadDer, A + mitad + 1, tamDer * sizeof(int));
     mitadIzq[tamIzq] = mitadDer[tamDer] = 2^31 - 1;//0xFFFFFFF;
     
     for(i = 0, j = 0, k = izq; k <= der ; k++)
        if(mitadIzq[i] <= mitadDer[j])
           A[k]=mitadIzq[i++];
        else{
           cont += (tamIzq-i); 
        A[k] = mitadDer[j++];
        }
        return cont;
}
