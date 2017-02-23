#include<stdio.h>
#include "colad.h"
int main()
{
    COLA C;
    init(&C);
    enqueue(&C,5);
    enqueue(&C,7);
    enqueue(&C,9);
    while(!empty(&C))
      printf("%d ",dequeue(&C));
    
    getchar(); 
       
    return 0;
}
