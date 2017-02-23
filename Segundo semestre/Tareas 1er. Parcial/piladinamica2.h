#include<stdio.h>
#include<stdlib.h>

typedef int datatype;

typedef struct nodo{
    datatype dato;
    struct nodo *sig;
}NODO;

typedef NODO* PILA;

void init(PILA *p)
{
     *p=NULL;
}

NODO * crear_nodo(datatype dato)
{
     NODO * nuevo=(NODO*)malloc(sizeof(NODO));
     if(nuevo==NULL)
     {
         printf("DESBORDAMIENTO DE PILA");
         exit(0);
     }
     nuevo->dato=dato;
     nuevo->sig=NULL;
     return nuevo;
}

void push (PILA *p,datatype dato)
{
     NODO *nuevo= crear_nodo(dato);
     nuevo->sig=*p;
     *p=nuevo;
}

int empty(PILA *p)
{
    return (*p==NULL);
}

datatype pop(PILA *p)
{
    if(empty(p))
    {
        printf("SUBDESBORDAMIENTO DE PILA");
        exit(0);
    }
    datatype dato=(*p)->dato;
    
    NODO *aux=*p;
    *p=aux->sig;
    
    free(aux);
    return dato;
}

datatype stacktop(PILA *p)
{
    datatype dato=pop(p);
    push(p,dato);
    
    return dato;
}
