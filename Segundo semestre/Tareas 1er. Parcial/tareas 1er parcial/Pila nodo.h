#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct nodo{
        datatype dato;
        struct nodo *sig;
        }NODO;
typedef NODO* PILA;
NODO* crear(datatype dato){
      NODO *nuevo;
      nuevo=(NODO *)malloc(sizeof(NODO));
      if(nuevo==NULL){
         printf("NO HAY MEMORIA SUFICIENTE");
         exit(0);
         }
      nuevo->dato=dato;
      nuevo->sig=NULL;
      return *nuevo;
      }
void init(PILA *p){
     *p=NULL;
  }
int empty(PILA *p){  
    return *p==NULL;
  }
void push(PILA *p, datatype dato){
     NODO *nuevo;
     nuevo=crear(dato);
     nuevo->sig=*p;
     *p=nuevo;
     }
datatype pop(PILA *p){
         datatype temp;
         NODO *aux;
         if(empty(p)){
           printf("SUBDESBORDAMIENTO DE PILA");
           exit(0);
           }
         temp=(*p)->dato;
         aux=(*p)->sig;
         *p=aux;
         free(aux);
  return temp;
  }
datatype stacktop(PILA *p){
         datatype temp=pop(p);
         push(p, temp);
  return temp;
  }
