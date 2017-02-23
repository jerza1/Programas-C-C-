/* PILAS  */
#include <stdio.h>
#include "Pila.h"


int main(){
    PILA mipila;
    
    init(&mipila);
    push(&mipila, 7);
    push(&mipila, 11);
    push(&mipila, 200);
    while(!empty(&mipila))
         printf("%d\n", pop(&mipila));
    return 0;
}
