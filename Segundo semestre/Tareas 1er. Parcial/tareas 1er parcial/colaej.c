/*COLA*/
#include <stdio.h>
#include "coladin.h"

int main(){
    
    COLA  c;
    
    init(&c);
    
    enqueue(&c, 7);
    enqueue(&c, 11);
    enqueue(&c, 200);
    
    while(!empty(&c))
         printf("%d\n", dequeue(&c));
         
    return 0;
}
