#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quicksort(int AGE[], int izq, int der);
int partition(int AGE[], int izq, int der);

int main(){
   int num, i;
   int AGE[200000];
   
   printf("Numeros a leer > 0:\n");
   scanf("%d",&num);
   while(num > 0){
    printf("Ingresar numeros: \n");
    for(i = 0; i < num; i++)
       scanf("%d",&AGE[i]);
       
    srand(time(NULL));
    quicksort(AGE, 0, num - 1);
    printf("\nNumeros ordenandos\n");  
    for(i = 0; i < num; i++)
       printf("%d  ",AGE[i]);
  
    printf("\n\nNumeros a leer > 0:\n");
    scanf("%d",&num);
   } 
   
return 0;
}

void quicksort(int age[], int izq, int der){
     long aux;
     if(izq < der){
         int aleatorio = izq + rand() % (der - izq + 1);
         aux = age[der];
         age[der] = age[aleatorio];
         age [aleatorio] = aux;
         int q = partition(age, izq, der);
        quicksort(age, izq, q - 1);
        quicksort(age, q + 1, der);
     }
}

int partition(int age[], int izq, int der){
    int i, j, aux, pivote = age[der];
    
    for(i = izq - 1, j = izq; j < der; j++){
      if(age[j] <= pivote){
         i++;
         aux = age[i];
         age[i] = age[j];
         age[j] = aux;
      }
    }
   i++; 
   age[der] = age[i];
   age[i] = pivote;
   return i;
}
