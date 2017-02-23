/*Implementacion dinamica de cola*/
#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct nodo{
        datatype dato;
        struct nodo *sig;
        }NODO;
        
typedef struct{
        NODO *frente, *final;
        }COLA;
        
void init(COLA *c){
     c->frente = c->final = NULL;
     }
        
int empty(COLA *c){
    return c->frente == NULL;
}

NODO *crearNodo(datatype dato){
     NODO *nuevo = (NODO *)malloc(sizeof(NODO));
     
     if(nuevo == NULL){
       printf("DESBORDAMIENTO DE COLA");
       exit(0);
       }
     nuevo->dato = dato;
     nuevo->sig = NULL;
     
     return nuevo;
     }
void enqueue(COLA *c, datatype dato){
     
     NODO *nuevo = crearNodo(dato);
     if(empty(c))
        c->frente = c->final = nuevo;
     else{
          c->final->sig = nuevo;
          c->final = nuevo;
          }
     }

datatype dequeue(COLA *c){
         
         if(empty(c)){
            printf("SUBDESBORDAMIENTO DE COLA\n");
            exit(0);
            }
         NODO *res = c->frente;        
         datatype temp =  c->frente->dato;
        if (c->frente == c->final) 
           c->final = NULL;
        
        c->frente = c->frente->sig;
        free(res);
        
         return temp; 
         }
         
datatype front(COLA *c){
     if(empty(c)){
         printf("DESBORDAMIENTO DE COLA");
         exit(1);
         }
     return c->frente->dato;
     }         
