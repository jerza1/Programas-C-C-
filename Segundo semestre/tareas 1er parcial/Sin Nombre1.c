//Determinar si los delimitadores en una expresion aritmetica estan balanceados
//Delimitadores (),[],{}.
//Por ejemplo: (x + 4), (x + 3 * [2 + 4])

#include <stdio.h>
#include "Pila.h"

int main(){
    PILA mipila;
    char expresion[100];
    int i;
    gets(expresion);
    for(i = 0; expresion[i] != '\0'; i++){
       if(expresion[i] == '(' || expresion[i] == '[' || expresion[i] == '{' )
          push(&mipila, expresion[i]);
       
       else if(expresion[i] == ')' || expresion[i] == ']' || expresion[i] == '}' ){
            if(empty(&mipila) == 1){
              printf("Expresion incorrecta\n");
              exit(0);}
            else
              pop(&mipila);
          }
          }
    if(empty(&mipila) == 1)
      printf("La expresion es correcta\n");
    return 0;
}
