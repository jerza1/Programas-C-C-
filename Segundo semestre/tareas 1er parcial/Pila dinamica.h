#include <stdio.h>
#include <stdlib.h>

typedef int datatype;
typedef struct nodo{
        datatype dato;
        struct nodo *sig;
        }NODO;
        
typedef struct{
        NODO *tope;
        }PILA;
        
void init(PILA *p){
     p->tope = NULL;
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

void push(PILA *p, datatype dato){
     NODO *nuevo = crearNodo(dato);
     nuevo->sig = p->tope;
     p->tope = nuevo;
     }

int empty(PILA *p){
    return (p->tope == NULL);
}

datatype pop(PILA *p){
         if(empty(p)){
            printf("SUBDESBORDAMIENTO DE PILA\n");
            exit(0);
            }
         datatype dato = p->tope->dato;
         NODO *aux = p->tope;
         p->tope = aux->sig;
         free(aux);
         return dato;
         }
datatype stacktop(PILA *p){
         
    datatype dato = pop(p);
    push(p, dato);
    
    return dato;
    }
