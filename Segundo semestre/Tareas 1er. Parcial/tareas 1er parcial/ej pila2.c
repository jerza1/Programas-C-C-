//Determinar si los delimitadores en una expresion aritmetica estan balanceados
//Delimitadores (),[],{}.
//Por ejemplo: (x + 4), (x + 3 * [2 + 4])

#include <stdio.h>
#include "Pila.h"

/*typedef int datatype;
typedef struct {
        datatype data[STACKSIZE];
        int tope;
        }PILA;

void push(PILA *, char );
int empty(PILA *);
datatype pop(PILA *);
datatype stacktop(PILA *);
void init(PILA *);*/

int main(){
    PILA mipila;
    char expresion[100];
    int i;
    printf("Ingresa la expresion\n");
    gets(expresion);
    init(&mipila);
    for(i = 0; expresion[i] != '\0'; i++){
       if(expresion[i] == '(' || expresion[i] == '[' || expresion[i] == '{' )
          push(&mipila, expresion[i]);
       
       else if(expresion[i] == ')' || expresion[i] == ']' || expresion[i] == '}' ){
            if(empty(&mipila) == 1){
              printf("Expresion incorrecta\n");
            
              }
            else
              pop(&mipila);
          }
          }
    if(empty(&mipila) == 1)
      printf("La expresion es correcta\n");
      
    return 0;
}
/*void push(PILA *p, char dato){
     
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
         datatype temp = pop(p);
         push(p, temp);
         return temp;
         }
         
void init(PILA *p){
     p->tope = -1;
     }   */
