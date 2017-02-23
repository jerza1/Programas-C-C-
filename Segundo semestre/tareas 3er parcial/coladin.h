/*Implementacion dinamica de cola*/
#include <stdio.h>
#include <stdlib.h>

typedef void * datatype_c;

typedef struct nodo_c{
        datatype_c dato;
        struct nodo_c *sig;
        }NODO_C;
        
typedef struct{
        NODO_C *frente, *final;
        }COLA;
        
void init_c(COLA *c){
     c->frente = c->final = NULL;
     }
        
int empty(COLA *c){
    return c->frente == NULL;
}

NODO_C *crearNodo(datatype_c dato){
     NODO_C *nuevo = (NODO_C *)malloc(sizeof(NODO_C));
     
     if(nuevo == NULL){
       printf("DESBORDAMIENTO DE COLA");
       exit(0);
       }
     nuevo->dato = dato;
     nuevo->sig = NULL;
     
     return nuevo;
     }
void enqueue(COLA *c, datatype_c dato){
     
     NODO_C *nuevo = crearNodo(dato);
     if(empty(c))
        c->frente = c->final = nuevo;
     else{
          c->final->sig = nuevo;
          c->final = nuevo;
          }
     }

datatype_c dequeue(COLA *c){
         
         if(empty(c)){
            printf("SUBDESBORDAMIENTO DE COLA\n");
            exit(0);
            }
         NODO_C *res = c->frente;        
         datatype_c temp =  c->frente->dato;
        if (c->frente == c->final) 
           c->final = NULL;
        
        c->frente = c->frente->sig;
        free(res);
        
         return temp; 
         }
         
datatype_c front(COLA *c){
     if(empty(c)){
         printf("DESBORDAMIENTO DE COLA");
         exit(1);
         }
     return c->frente->dato;
     }         
