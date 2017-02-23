#include <stdio.h>
#include <stdlib.h>
#include "coladin.h"


typedef int datatype_t;

typedef struct nodo_t{
        datatype_t clave;
        struct nodo_t *padre, *hijo, *hizq, *hder;
        }NODO_T;
typedef struct{
        NODO_T *raiz;
        }ABB;
init(ABB *arbol){
         arbol->raiz = NULL;
         }
NODO_T *crearNodo_t(datatype_t clave){
     NODO_T *nuevo = (NODO_T *)malloc(sizeof(NODO_T));
     if(nuevo == NULL){
              printf("ERROR: No hay memoria diponible");
              exit(-1);
              }
     nuevo->clave = clave;
     nuevo->padre = nuevo->hizq = nuevo->hder = NULL;
     return nuevo;
     }
datatype_t empty_t(ABB *arbol){
    return arbol->raiz == NULL;
   }
void inserta(ABB *arbol, datatype_t clave){
     NODO_T *nuevo = crearNodo_t(clave);
     if(empty_t(arbol))
     arbol->raiz = nuevo;
     else{
          NODO_T *aux, *paux = NULL;
          for(aux = arbol->raiz; aux!= NULL; ){
              if(aux->clave == clave)
                 return;
              paux = aux;
              if(clave < aux->clave)
                 aux = aux->hizq;
              else aux = aux->hder;
              }
          if(clave < paux->clave)
             paux->hizq = nuevo;
          else paux->hder = nuevo;
          nuevo->padre = paux;
          }
     }
void preOrden(NODO_T *n){
     if(n != NULL){
          printf("%d\t",n->clave);
          preOrden(n->hizq);
          preOrden(n->hder);
          }
     }
void enOrden(NODO_T *n){
     if(n != NULL){
          enOrden(n->hizq);
          printf("%d\t",n->clave);
          enOrden(n->hder);
          }
     }
void posOrden(NODO_T *n){
     if(n != NULL){
          posOrden(n->hizq);
          posOrden(n->hder);
          printf("%d\t",n->clave);
          }
     }
     
NODO_T *buscar(NODO_T *n, datatype_t clave){
     if(n == NULL || (n->clave == clave))
        return n;
     if(clave < n->clave)
       return buscar(n->hizq, clave);
     return buscar(n->hder, clave);
     }
     
NODO_T *sucesor(NODO_T *n){
     if(n->hder != NULL){
        NODO_T *aux = n->hder;   
        if(aux->hizq == NULL) 
          return aux;
        while(aux->hizq != NULL)  
             aux = aux->hizq;
        return aux;
        }
     return n;        
     }
void eliminar(ABB *arbol, NODO_T *n){
     if(empty_t(arbol) || n == NULL){
        printf("ERROR; El arbol esta vacio o no existe nodo para eliminar\n");
        exit(-1);
        }
     NODO_T *x, *y;
     if(n->hizq == NULL || n->hder == NULL)
     y = n;
     else y = sucesor(n);
     if(y->hizq != NULL)
        x = y->hizq;
     else x = y->hder;
     if(x != NULL)
        x->padre = y->padre;
     if(y->padre == NULL)
        arbol->raiz = x;
     else{
          if(y == y->padre->hizq)
             y->padre->hizq = x;
          else y->padre->hder = x;
          }
     if(y != n) n->clave = y->clave;
        free(y);
        }
        
void *anchura(NODO_T *n){
     COLA colita;
     NODO_T *aux;
     if(n == NULL)
        return ;
        init_c(&colita);
     enqueue(&colita,(void *) n);
     while(!empty(&colita)){
          aux = (NODO_T *)dequeue(&colita);
          printf("%d\t",aux->clave);
          if(aux->hizq)
          enqueue(&colita,(void *) aux->hizq);
          if(aux->hder)
          enqueue(&colita,(void *) aux->hder);
          }
}
int Nivel(NODO_T *n){
   int aux = 1;
   while(n->padre != NULL){
        aux++;
        n = n->padre;
        }
   return aux;
}

int main(){
    ABB arbol;
    NODO_T *aux;
    int cont;
    init(&arbol);
    inserta(&arbol, 7);
    inserta(&arbol, 4);
    inserta(&arbol, 8);
    inserta(&arbol, 5);
    inserta(&arbol, 3);
    inserta(&arbol, 1);
    inserta(&arbol, 2);
    inserta(&arbol, 6);
    inserta(&arbol, 20);
    inserta(&arbol, 16);
    printf("PREORDEN: \n"); preOrden(arbol.raiz);
    printf("\n");
    printf("ENORDEN: \n"); enOrden(arbol.raiz);
    printf("\n");
    printf("POSORDEN: \n"); posOrden(arbol.raiz);
    printf("\n");
    aux = sucesor(buscar(arbol.raiz, 4));
    printf("SUCESOR ES : %d\n", *aux);
    printf("ANCHURA: \n"); anchura(arbol.raiz);
    printf("\n");
    eliminar(&arbol, buscar(arbol.raiz, 8));
    printf("PREORDEN: \n"); preOrden(arbol.raiz);
    printf("\n");
    printf("ANCHURA: \n"); anchura(arbol.raiz);
    printf("\n");
    cont = Nivel(buscar(arbol.raiz, 2));
    printf("%d \n", cont);
    return 0;
}
