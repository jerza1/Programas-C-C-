#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct nodo{
        datatype clave;
        struct nodo *padre, *hijo, *hizq, *hder;
        }NODO;
typedef struct{
        NODO *raiz;
        }ABB;
init(ABB *arbol){
         arbol->raiz = NULL;
         }
NODO *crearNodo(datatype clave){
     NODO *nuevo = (NODO *)malloc(sizeof(NODO));
     if(nuevo == NULL){
              printf("ERROR: No hay memoria diponible");
              exit(-1);
              }
     nuevo->clave = clave;
     nuevo->padre = nuevo->hizq = nuevo->hder = NULL;
     return nuevo;
     }
int empty(ABB *arbol){
    return arbol->raiz == NULL;
   }
void inserta(ABB *arbol, datatype clave){
     NODO *nuevo = crearNodo(clave);
     if(empty(arbol))
     arbol->raiz = nuevo;
     else{
          NODO *aux, *paux = NULL;
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
void preOrden(NODO *n){
     if(n != NULL){
          printf("%d\n",n->clave);
          preOrden(n->hizq);
          preOrden(n->hder);
          }
     }
void enOrden(NODO *n){
     if(n != NULL){
          enOrden(n->hizq);
          printf("%d\n",n->clave);
          enOrden(n->hder);
          }
     }
void posOrden(NODO *n){
     if(n != NULL){
          posOrden(n->hizq);
          posOrden(n->hder);
          printf("%d\n",n->clave);
          }
     }
NODO *buscar(NODO *n, datatype clave){
     if(n == NULL || (n->clave == clave))
        return n;
     if(clave < n->clave)
       return buscar(n->hizq, clave);
     return buscar(n->hder, clave);
     }
     
NODO *sucesor(NODO *n){
     if(n->hder != NULL){
        NODO *aux = n->hder;   
        if(aux->hizq == NULL) 
          return aux;
        while(aux->hizq != NULL)  
             aux = aux->hizq;
        return aux;
        }
     return n;        
     }
void eliminar(ABB *arbol, NODO *n){
     if(empty(arbol) || n == NULL){
        printf("ERROR; El arbol esta vacio o no existe nodo para eliminar\n");
        exit(-1);
        }
     NODO *x, *y;
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

int Nivel(NODO *n){
   int aux = 1;
   while(n->padre != NULL){
        aux++;
        n = n->padre;
        }
   return aux;
}
