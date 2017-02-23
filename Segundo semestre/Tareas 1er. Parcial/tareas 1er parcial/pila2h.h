//Pila2din.h
#include <stdio.h>
#include <stdlib.h>

typedef int datatype;
typedef struct nodo{
    datatype dato;
    struct nodo *sig;
    }NODO;

typedef NODO* PILA;

void init(PILA *p){
     *p = NULL;
     }
      
NODO *crearNodo(datatype dato){
     NODO *nuevo = (NODO *)malloc(sizeof(NODO));
     
     if(nuevo == NULL){
       printf("DESBORDAMIENTO DE PILA");
       exit(0);
       }
     nuevo->dato = dato;
     nuevo->sig = NULL;
     
     return nuevo;
     }   
          
     
int empty(PILA *p){
    return *p == NULL;
}

void push(PILA *p, datatype dato){
     NODO *nuevo = crearNodo(dato);
     nuevo->sig = *p;
     *p = nuevo;
     }
     
datatype pop(PILA *p){
         if(empty(p)){
            printf("SUBDESBORDAMIENTO DE PILA\n");
            exit(0);
            }
         datatype dato=(*p)->dato;
         NODO *aux=*p;
         *p=aux->sig;
        free(aux);
        return dato;
        }
        
datatype stacktop(PILA *p){
    datatype dato = pop(p);
    push(p, dato);
    
    return dato;
}
