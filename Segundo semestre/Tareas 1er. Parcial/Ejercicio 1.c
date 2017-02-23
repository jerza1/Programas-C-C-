/*Ejercicio 1*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    int *num, *num2;
    
    do{
        printf("Ingresa un numero > 0\n");
        scanf("%d", &n);
        }while(n <  0);
   num = (int *) malloc(n * sizeof(int));
   num2 = (int *) malloc((n/2) * sizeof(int));
   
   if(num != NULL && num2 != NULL){
      for(i = 1; i <= n; i++){
        printf("Num %d = ", i);
        scanf("%d", &num[i]);
       }
     for(i = 0, j = n; i < (n/2); i++, j--)
       printf("%d\n", num[j]);
     
      for(i = 1; i <= (n/2); i++){
        printf("Num %d = ", i);
        scanf("%d", &num2[i]);
       }
     for(i = (n/2); i > 0; i--)
       printf("%d\n", num2[i]);
     for(i = (n/2); i > 0; i--)
       printf("%d\n", num[i]);
       
   }else
      printf("No hubo memoria\n\a");
   putchar('\n');
   free(num);
   free(num2);
   
   return 0;
}
