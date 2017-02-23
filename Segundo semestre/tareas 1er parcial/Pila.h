#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 100

typedef int datatype;
typedef struct {
        datatype data[STACKSIZE];
        int tope;
        }PILA;

void push(PILA *p, datatype dato){
     
     if(p->tope == STACKSIZE - 1){
        printf("DESBORDAMIENTO DE PILA\n");
        exit(0);
        }
     p->tope++;
     p->data[p->tope] = dato;
     }
     
int empty(PILA *p){
    return p->tope == -1;
}

datatype pop(PILA *p){
         if(empty(p)){
            printf("SUBDESBORDAMIENTO DE PILA\n");
            exit(0);
            }
         p->tope--;
         return p->data[p->tope+1];
         }
         
datatype stacktop(PILA *p){
         if(empty(p)){
            printf("Subdesbordamiento\n");  
            exit(0);
            }
   return p->data[p->tope];
}

         
void init(PILA *p){
     p->tope = -1;
     }   
     
datatype repetir(PILA *p, int num){
         datatype cont = 0, dato;
         if(empty(p)){
            return 0;
            }
         else{
             while(!empty(p)){
                   dato = pop(p);
                   if(dato == num){
                      cont ++;
                      push(p, dato);
                      }
                   else
                     push(p, dato);
                   }
             }
return cont;
}
