#include <stdio.h>
#include <stdlib.h>

typedef int datatype;
typedef struct nodo{
        datatype dato;
        struct nodo *sig;
        }NODO;
        
typedef struct pila{
        struct nodo *tope;
        }PILA;
        
NODO* crear(datatype dato){
      NODO *nuevo;
      nuevo = (NODO *) malloc(sizeof(NODO));
      if(nuevo == NULL){
         printf("NO HAY MEMORIA SUFICIENTE");
         exit(0);
        }
      nuevo->dato = dato;
      nuevo->sig = NULL;
      return *nuevo;
      }
      
void init(PILA *p){
     p->tope = NULL;
     }
     
int empty(PILA *p){  //si esta vacia retorna 1
    return p->tope == NULL;
    }
void push(PILA *p, datatype dato){
     NODO *nuevo;
     nuevo = crear(dato);
     nuevo->sig = p->tope;
     p->tope = nuevo;
     }
datatype pop(PILA *p){
         datatype temp;
         NODO *aux;
         if(empty(p)){
            printf("SUBDESBORDAMIENTO DE PILA");
            exit(0);
            }
         temp = p->tope->dato;
         aux = p->tope;
         p->tope = aux->sig;
         free(aux);
         return temp;
         }
datatype stacktop(PILA *p){
         datatype temp = pop(p);
         push(p, temp);
         return temp;
         }
