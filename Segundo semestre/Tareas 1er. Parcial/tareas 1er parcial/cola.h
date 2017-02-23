#include <stdio.h>
#include <stdlib.h>
#define COLA_SIZE 100

typedef int datatype;
typedef struct {
        datatype data[COLA_SIZE];
        int frente, final;
        }COLA;

void init(COLA *c){
     c->frente = c->final = 0;
     }
        
int empty(COLA *c){
    return c->frente == c->final;
}

void enqueue(COLA *c, datatype dato){
     
     if((c->final + 1 % COLA_SIZE == c->frente)){
        printf("DESBORDAMIENTO DE PILA\n");
        exit(0);
        }
        
     c->data[c->final] = dato;
     c->final = (c->final + 1)% COLA_SIZE;
     }

datatype dequeue(COLA *c){
         
         if(empty(c)){
            printf("SUBDESBORDAMIENTO DE PILA\n");
            exit(0);
            }
            
         datatype res = c->data[c->frente];
         c->frente = (c->frente + 1)% COLA_SIZE;
         
         return res;
         }
         
