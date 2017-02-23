#include<stdio.h>
#include<stdlib.h>
typedef int datatype;

typedef struct nodo{
        datatype dato;
        struct nodo *sig;
}NODO;

typedef struct{
        NODO *frente,*final;
}COLA;

void init(COLA *c)
{
     c->frente=NULL;
     c->final=NULL;
}

int empty(COLA *c)
{
    return c->frente==NULL;
}
NODO * crear_nodo(datatype dato)
{
     NODO * nuevo=(NODO *)malloc(sizeof(NODO));
     if(nuevo==NULL){
         printf("DESBORDAMIENTO DE PILA");
         exit(0);
     }
     nuevo->dato=dato;
     nuevo->sig=NULL;
     return nuevo;
}
void enqueue(COLA *c,datatype dato)
{
     NODO *nuevo=crear_nodo(dato);
     if(empty(c))
         c->frente=c->final=nuevo;
     else{
          c->final->sig=nuevo;
          c->final=nuevo;
     }
}

datatype front(COLA *c)
{
     if(empty(c))
     {
         printf("DESBORDAMIENTO DE COLA");
         exit(1);
     }
     return c->frente->dato;
}

datatype dequeue(COLA *c)
{
     if(empty(c)){
        printf("DESBORDAMIENTO DE COLA");
        exit(1);
     }
     datatype dato=c->frente->dato;
     NODO *aux=c->frente;
     if(c->frente==c->final)
          c->final=NULL;
     c->frente=c->frente->sig;
     return dato;
}

