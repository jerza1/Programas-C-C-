#include <stdio.h>
#include <conio.h>
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
     return nuevo;
}

int insertaDespues(LISTA *l, NODO *n, datatype dato){
     NODO *aux, *nuevo, *aux1;
     if(n == NULL){
          printf("ERROR: %d debe apuntar a un nodo", n);
          exit(-1);
          }
     nuevo =  crearNodo(dato);
         if(l->frente == NULL){
           l->frente = nuevo;
           l->frente->ant = NULL;
           l->frente->sig = NULL;
     }
     else{
           aux = l->frente;
           while(aux != NULL && aux->dato != n->dato)
                 aux = aux->sig;
           if(aux == NULL)
                printf("\n%d No esta en la lista ",n->dato);
           else{
           aux1 = aux->sig;
           aux->sig = nuevo;
           nuevo->ant = aux; 
           nuevo->sig = aux1;
           aux1->ant = nuevo;
           }
     }
     l->final = l->frente;
     while(l->final->sig != NULL)
           l->final = l->final->sig;
}   

void insertaAntes(LISTA *l, NODO *n, datatype dato){
    NODO *nuevo,*aux;
    if(n == NULL){
          printf("ERROR: %d debe apuntar a un nodo", n);
          exit(-1);
          }
     insertaDespues(l, n, n->dato);
     n -> dato;
}

void insertaFrente(LISTA *l, datatype dato){
     if(empty(l))
          l -> frente = crearNodo(dato);
     else
          insertaAntes(l, l->frente, dato);
     }
     
void insertaFinal(LISTA *l, datatype dato){
     if(empty(l))
        insertaFrente(l, dato);
     else{
          NODO *aux = l->frente;
          while(aux -> sig != NULL)
               aux = aux->sig;
          insertaDespues(l, aux, dato);
         }
     }

int eliminaFinal(LISTA *L){
      struct nodo *aux;
      aux = L->final;
      if(aux->ant == NULL){
           free(aux);
           L->frente = NULL;
           L->final = NULL;
           return 0;
      }
      printf("\nData deleted from list is %d \n",L->final->dato);
      L->final = aux->ant;
      L->final->sig = NULL;
      free(aux);
      return 0;
} 

int elimina(LISTA *L, datatype valor){
    NODO *aux, *var, *t, *aux1;
    aux = L->frente;
    while(aux != NULL){
        if(aux->dato == valor){
             if(aux->ant==NULL){
                  free(aux);
                  L->frente = NULL;
                  L->final = NULL;
                  return 0;
             }
             else{
                  var->sig = aux1;
                  aux1->ant = var;
                  free(aux);
                  return 0;
             }
        }
        else{
              var = aux;
              aux = aux->sig;
              aux1 = aux->sig;
        }
    }
    printf("data deleted from list is %d",valor);
}  

void display(LISTA *L){
     NODO *aux;
     aux = L->frente;
     if(aux ==NULL)
         printf("List is Empty");
     while(aux != NULL){
          printf("-> %d ",aux->dato);
          aux = aux->sig;
     }
}
NODO *buscar(NODO *l, datatype dato){
     if(l == NULL || (l->dato == dato))
        return l;
     if(dato != l->dato)
       return buscar(l->sig, dato);
     }

int main(){
    int valor, i, nodo;
    LISTA lista;
    init(&lista);
    printf("Selecciona una operacion de listas");
    printf("\n1.) Insertar frente\n2.) Insertar final\n3.) Insertar despues");
    printf("\n4.) Eliminar nodo\n5.)Eliminar final \n6.)exit");
    while(1){
          printf("\n\nIngresa la operacion que deseas hacer ");
          scanf("%d",&i);
          switch(i){
                case 1:{
                 printf("Ingresa el valor del nodo ");
                 scanf("%d",&valor);
                 insertaFrente(&lista, valor);
                 display(&lista);
                 break;
                 }
                 case 2:{
                 printf("Ingresa el valor del nodo final ");
                 scanf("%d",&valor);
                 insertaFinal(&lista, valor);
                 display(&lista);
                 break;
                 }
                 case 3:{
                 printf("Despues de que datos quieres insertar");
                 scanf("%d",&nodo);
                 printf("Ingresar el valor del nodo ");
                 scanf("%d",&valor);
                 insertaDespues(&lista, buscar(lista.frente, nodo), valor);
                 display(&lista);
                 break;
                 }
                 case 4:{
                 printf("Ingresa el valor del nodo a borrar");
                 scanf("%d",valor);
                 elimina(&lista, valor);
                 display(&lista);
                 break;
                 }
                 case 5:{
                 eliminaFinal(&lista);
                 display(&lista);
                 break;
                 }
                 case 6 :{
                      exit(0);
                      break;
                 }
          }
    }
    printf("\n\n%d",lista.final->dato);
    display(&lista);
    return 0;
}
