#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 100

typedef int datatype;

typedef struct{
   datatype data[STACK_SIZE];
   int tope;
}PILA;

void init(PILA *p)
{
     p->tope=-1;
}

void push(PILA *p,datatype dato)
{
     if(p->tope==STACK_SIZE-1)
     {
        printf("DESBORDAMIENTO DE PILA\n");
        exit(0);
     }
     p->tope++;
     p->data[p->tope]=dato;
}

int empty(PILA *p)
{
    return p->tope==-1;
}

datatype pop(PILA *p)
{
   if(empty(p))
   {
     printf("Error: Subdesbordamiento\n");  
     exit(0);
   }
   p->tope--;
   return p->data[p->tope+1];
}

datatype stacktop(PILA *p)
{
   if(empty(p))
   {
     printf("Error: Subdesbordamiento\n");  
     exit(0);
   }
   return p->data[p->tope];
}


