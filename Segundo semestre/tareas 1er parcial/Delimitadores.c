//Determinar si los delimitadores en una expresion aritmetica estan balanceados
//Delimitadores (),[],{}.
//Por ejemplo: (x + 4), (x + 3 * [2 + 4])

#include <stdio.h>
#include "Pila.h"

int main(){
  int band = 0;
  char expre[STACKSIZE], i;
  PILA delim;
    
  init(&delim);
  
  printf("Expresion: \n");
  gets(expre);
  
  for(i = 0;expre[i] != '\0';i++){
        if(expre[i] == '[' || expre[i] == '{' || expre[i] == '(')
             push(&delim, expre[i]);
        if(expre[i] == ']' || expre[i] == '}' || expre[i] == ')')
             if(empty(&delim)){
                printf("\nExpresion incorrecta\n\n");
                band = 1;
                }
             else
                switch(expre[i]){
                   case ')': if(pop(&delim) != '('){
                               printf("\nExpresion incorrecta\n");
                               band = -1;
                               }
                             break;
                   case ']': if(pop(&delim) != '['){
                               printf("\nExpresion incorrecta\n");
                               band = -1;
                               }
                             break;
                   case '}': if(pop(&delim) != '{'){
                               printf("\nExpresion incorrecta\n");
                               band = -1;
                               }
                             break;
                }        
        }
    if(empty(&delim) && band == 0)
        printf("\nExpresion correcta\n");
    else if(band == 0)
        printf("\nExpresion incorrecta\n");
      
    return 0;
}
