//Determinar si los delimitadores en una expresion aritmetica estan balanceados
//Delimitadores (),[],{}.
//Por ejemplo: (x + 4), (x + 3 * [2 + 4])

#include <stdio.h>
#include "Pila.h"

int main(){
    PILA mipila;
    char expresion[100],i;
    int band = 0;
    
    init(&mipila);
     
    printf("Expresion: ");
    gets(expresion);
    for(i = 0; expresion[i] != '\0'; i++){
       if(expresion[i] == '(' || expresion[i] == '[' || expresion[i] == '{' )
          push(&mipila, expresion[i]);
       if(expresion[i] == ']' || expresion[i] == '}' || expresion[i] == ')')
             if(empty(&mipila)){
                printf("\nExpresion incorrecta\n\n");
                band = 1;
                }
             else
                switch(expresion[i]){
                   case ')': if(pop(&mipila) != '('){
                               printf("\nExpresion incorrecta\n");
                               band = -1;
                               }
                             break;
                   case ']': if(pop(&mipila) != '['){
                               printf("\nExpresion incorrecta\n");
                               band = -1;
                               }
                             break;
                   case '}': if(pop(&mipila) != '{'){
                               printf("\nExpresion incorrecta\n");
                               band = -1;
                               }
                             break;
                }        
          if(band == -1)
              break;
        }
    if(empty(&mipila) == 1 && band == 0)
      printf("La expresion es correcta\n");
    else if(band == 0)
        printf("\nExpresion incorrecta\n");
      
    return 0;
}
