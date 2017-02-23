/*Ejercicio 1 Pilas*/

#include <stdio.h>
#include "Pila.h"

int main(){
    int n, i, num;
    PILA mipila;
    
    init(&mipila);
    do{
        printf("Ingresa un numero > 0\n");
        scanf("%d", &n);
        }while(n <  0);
    for(i = 1; i <= n; i++){
        printf("Num %d = ", i);
        scanf("%d", &num);
        push(&mipila, num);
       }
    for(i = 1; i <= (n/2); i++)
         printf("%d\n", pop(&mipila));
         
    printf("Ingresa %d numero(s): \n", (n/2));
    for(i = 1; i <= (n/2); i++){
        printf("Num %d = ", i);
        scanf("%d", &num);
        push(&mipila, num);
       }
    while(!empty(&mipila))
         printf("%d\n", pop(&mipila));
   
   return 0;
}
