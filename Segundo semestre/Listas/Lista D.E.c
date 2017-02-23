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
     l->frente = NULL;
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
     nuevo->dato = dato;
     nuevo->sig = NULL;
     nuevo->ant = NULL;
     return nuevo;
}
void insertaDespues(LISTA *L, NODO *n, datatype dato){
     if(n == NULL){
          printf("ERROR: %d debe apuntar a un nodo", n);
          exit(-1);
          }
     NODO *nuevo = crearNodo(dato), *aux = n->sig;
     if(aux != NULL){
        nuevo -> sig = n -> sig;
        nuevo->ant = n;
        aux->ant = nuevo;
        n -> sig =  nuevo;
     }
     else{
          n -> sig = nuevo;
          nuevo -> ant =n;
          }}
     
    
void insertaAntes(LISTA *L, NODO *n, datatype dato){
     if(n == NULL){
          printf("ERROR", n);//****
          exit(-1);
          }         
     if(n->ant != NULL){
       NODO *nuevo = crearNodo(dato), *aux = n->ant;
       nuevo -> sig = n;
       nuevo->ant = n->ant;
       aux->sig = nuevo;
       n -> ant =  nuevo;
     }
     else{
    NODO *nuevo = crearNodo(dato);
     L->frente = nuevo;
     nuevo ->ant = NULL;
     n->ant = nuevo;
     nuevo -> sig = n;}
     
     }
     
void insertaFrente(LISTA *L, datatype dato){
     if(empty(L))
          L->frente = crearNodo(dato);
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
NODO *aux = n->sig;
  if(n== NULL){
          printf("ERROR: %d debe apuntar a un nodo", n);
          exit(-1);
          }
     if(n == L->frente){
          if(aux==NULL){
            L -> frente = NULL;}
          else{
             L->frente = aux;
             aux->ant = NULL;
             n->sig = NULL;}}
     else{
          NODO *aux = L->frente;
       if(n->sig == NULL){
            NODO *aux = n -> ant;
            n->ant=NULL;   
            aux->sig=NULL;}
       else {while(aux -> sig != n)
               aux = aux->sig;
          aux->sig = n->sig;
          n->sig->ant = aux;
         }}
         free(n);
     }
void eliminafrente(LISTA *L){
     elimina(L, L->frente);
     }
void eliminafinal(LISTA *L){
     NODO *aux = L->final;
      if(aux->ant == NULL){
           free(aux);
           L->frente = NULL;
           L->final = NULL;
      }else{
           L->final = aux->ant;
           L->final->sig = NULL;
           free(aux);
          }
      printf("\nEl nodo fue borrado de la lista \n");
      }
      
void MostrarLista(LISTA *L){
     NODO *aux;
     aux = L->frente;
     if(aux == NULL)
         printf("Lista vacia");
     while(aux != NULL){
          printf("-> %d ",aux->dato);
          aux = aux->sig;
     }
} 
NODO *buscar(NODO *l, datatype dato){
     if(l == NULL || (l->dato == dato))
        return l;
       return buscar(l->sig, dato);
     }
int main(){
    int valor, op, nodo;
    LISTA lista;
    init(&lista);
    
    printf("Selecciona una operacion de listas");
    printf("\n1.) Insertar frente\n2.) Insertar final\n3.) Insertar despues\n4.) Insertar antes");
    printf("\n5.) Eliminar nodo\n6.) Eliminar final \n7.) Eliminar frente \n8.) EXIT");
    do{
          printf("\n\nIngresa la operacion que deseas hacer ");
          scanf("%d",&op);
          switch(op){
                case 1:{
                 printf("Ingresa el valor del nodo frente ");
                 scanf("%d",&valor);
                 insertaFrente(&lista, valor);
                 MostrarLista(&lista);
                 break;
                 }
                 case 2:{
                 printf("Ingresa el valor del nodo final ");
                 scanf("%d",&valor);
                 insertaFinal(&lista, valor);
                 MostrarLista(&lista);
                 break;
                 }
                 case 3:{
                 printf("Despues de que nodo quieres insertar");
                 scanf("%d",&nodo);
                 printf("Ingresar el valor del nuevo nodo ");
                 scanf("%d",&valor);
                 insertaDespues(&lista, buscar(lista.frente, nodo), valor);
                 MostrarLista(&lista);
                 break;
                 }
                 case 4:{
                 printf("Antes de que nodo quiere insertar");
                 scanf("%d",&nodo);
                 printf("Ingresar el valor del nuevo nodo ");
                 scanf("%d",&valor);
                 insertaAntes(&lista, buscar(lista.frente, nodo), valor);
                 MostrarLista(&lista);
                 break;
                 }
                 case 5:{
                 printf("Ingresa el valor del nodo a borrar");
                 scanf("%d",&valor);
                 elimina(&lista, buscar(lista.frente,valor));
                 MostrarLista(&lista);
                 break;
                 }
                 case 6:{
                 eliminafinal(&lista);
                 MostrarLista(&lista);
                 break;
                 }
                 case 7:{
                 eliminafrente(&lista);
                 MostrarLista(&lista);
                 break;
                 }
                 case 8 :{
                      exit(0);
                      break;
                 }
          }
    }while(op != 8);
    printf("\n\n%d",lista.final->dato);
    MostrarLista(&lista);
    return 0;
}
