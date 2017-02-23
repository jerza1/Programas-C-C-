#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct nodo{
    datatype dato;
    struct nodo *sig, *ant;
}NODO;

typedef struct{
    NODO *frente, *final;
}LISTA;

void init(LISTA *l){
     l->frente = l->final = NULL;
}

int empty(LISTA *l){
    return (l->frente == NULL);
}

NODO *crearNodo(datatype dato){
     NODO *nuevo = (NODO *)malloc(sizeof (NODO));
     if(nuevo == NULL){
         printf("ERROR\n");
         exit(0);
     }
     nuevo->dato =dato;
     nuevo->ant = nuevo->sig = NULL;
     return nuevo;
}
void insertaDespues(LISTA *L, NODO *n, datatype dato){
     if(n == NULL){
          printf("ERROR: %d debe apuntar a un nodo", n);
          exit(-1);
          }
     NODO *nuevo = crearNodo(dato);
     nuevo -> sig = n -> sig;
     n -> sig =  nuevo;
     }
void insertaAntes(LISTA *L, NODO *n, datatype dato){
     if(n == NULL){
          printf("ERROR: %d debe apuntar a un nodo", n);
          exit(-1);
          }
     insertaDespues(L, n, n->dato);
     n -> dato;
     }
void insertaFrente(LISTA *L, datatype dato){
     if(empty(L))
          L -> frente = crearNodo(dato);
     else
          insertaAntes(L, L->frente, dato);
     }
void insertaFinal(LISTA *L, datatype dato){
     if(empty(L))
        insertaFrente(L, dato);
     else{
          NODO *aux = L->frente;
          while(aux -> sig != NULL)
               aux = aux->sig;
          insertaDespues(L, aux, dato);
         }
     }
void elimina(LISTA *L, NODO *n){
     if(n == NULL){
          printf("ERROR: %d debe apuntar a un nodo", n);
          exit(-1);
          }
     if(n == L->frente)
        L->frente = n->sig;
     else{
          NODO *aux = L->frente;
          while(aux -> sig != NULL)
               aux = aux->sig;
          aux->sig = n->sig;
         }
         free(n);
     }
void eliminafrente(LISTA *L){
     elimina(L, L->frente);
     }
/*void eliminafinal(LISTA *L){
     }*/
int main(){
    
    return 0;
}
