#include <stdio.h>
#include "Pila dinamica.h"
#define TAM 100

int main(){
    char cad[TAM];   
    
    PILA pila;
    int i, cont = 0, num1, num2, band = 1;
    
    init(&pila);
    
    printf("Expresion: \n");
    gets(cad);
    
    for(i = 0; cad[i] != '\0' && band ; i++){
        if(cad[i] >= '0' && cad[i] <= '9'){
            push(&pila, cad[i]-'0');
            cont++;
            }
        else if(cad[i] == '-' || cad[i] == '+' || cad[i] == '*' || cad[i] == '/'){
           if(empty(&pila)){
             printf("No hay elementos\n");
             band = 0;
             }
           else if(cont >= 2){
             num1 = pop(&pila);
             num2 = pop(&pila);
             switch(cad[i]){
               case '-':  push(&pila, num2-num1);
                          break;
               case '+':  push(&pila, num1+num2);
                          break;
               case '*':  push(&pila, num1*num2);
                          break;
               case '/':  if(num1 != 0)
                              push(&pila, num2/num1);
                          else
                            printf("Division indefinida\n");
                          break;
                 }
           }
          if(cont == 1){
              printf("La expresion no es posfija\n");
              band = 0;
              }
              }
          }           
    if(band)
       printf("\nEl resultado es: %d",pop(&pila));
       
    return 0;
}
