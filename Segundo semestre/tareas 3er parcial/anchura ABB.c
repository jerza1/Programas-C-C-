#include <stdio.h>
#include <stdlib.h>
#include "cola.h"
typedef int datatype_t;
typedef struct nodo_t{
        struct nodo_t *padre, *hizq, *hder;
        datatype_t clave;
        }NODO_T;
typedef void* datatype_c;
typedef struct nodo_c{
        struct nodo_c *sig;
        datatype_c dato;
        }NODO_C;

void anchura(NODO_T* n){
     COLA colita;
     NODO_T *aux;
     if(n != NULL){
        init_c(&colita);
     enqueue(&colita, n);
     while(!empty(&colita)){
          aux = dequeue(&colita);
          printf("%d", aux->clave);
          if(aux->hizq)
          enqueue(&colita, aux->hizq);
          if(aux->hder)
          enqueue(&colita, aux->hder);
          }}
          
          }
          
