#include <stdio.h>
#include "Evaluacion posfija.h"
#define TAM 100

int main(){
    char infija[TAM], posfija[TAM];
    PILA pila;
    int i, j, cont, num1, num2;
    
    init(&pila);
    printf("Expresion infija: ");
    gets(infija);

    for(i = 0, j = 0; infija[i] != '\0'; i++){
      if(infija[i] >= '0' && infija[i] <= '9'){
         posfija[j] = infija[i];
         j++;
         }
      else if(infija[i] == '(')
              push(&pila, infija[i]);
      else if(infija[i] =='+' || infija[i] == '-' || infija[i] == '*' || infija[i] == '/'){
         if(empty(&pila) == 1 || stacktop(&pila) == '(')
             push(&pila, infija[i]);
         else if(prioridad((stacktop(&pila))) == prioridad(infija[i])){
                 posfija[j] = pop(&pila);
                 j++;
                 push(&pila, infija[i]);}
         else if(prioridad(stacktop(&pila)) < prioridad(infija[i]))
                 push(&pila, infija[i]);
         else if(prioridad((stacktop(&pila))) > prioridad(infija[i])){
                 posfija[j] = pop(&pila);
                 j++;
                 push(&pila, infija[i]);}
      }
       else if(infija[i] == ')'){
              while(stacktop(&pila) != '(' && empty(&pila) != 1){
                  posfija[j] = pop(&pila);
                  j++;
                  }
              if(stacktop(&pila) == '(')
                  pop(&pila);
                  }
      }
      while(empty(&pila) != 1){
          if(stacktop(&pila) == '(')
              pop(&pila);
          else{
          posfija[j] = pop(&pila);
          j++;
          }
          }    
      posfija[j] = '\0';
      printf("Expresion Posfija: ");
      for(i = 0;posfija[i] != '\0';i++)
          printf("%c ",posfija[i]);
            
      for(i = 0;posfija[i] != '\0';i++){
        if(posfija[i] >= '0' && posfija[i] <= '9'){
            push(&pila, posfija[i]-'0');
            cont++;
            }
        else if(posfija[i] == '-' || posfija[i] == '+' || posfija[i] == '*' || posfija[i] == '/'){
           if(empty(&pila) == -1)
             printf("No hay elementos \n");
           else{
             num1 = pop(&pila);
             num2 = pop(&pila);
             switch(posfija[i]){
               case '-':  push(&pila,num2-num1);
                          break;
               case '+':  push(&pila,num1+num2);
                          break;
               case '*':  push(&pila,num1*num2);
                          break;
               case '/':  if(num1!=0)
                              push(&pila,num2/num1);
                          else
                             printf("Division indefinida\n");
                          break;               
           }
           }
        }            
    }
    printf("\n\nEl resultado es: %d",pop(&pila));

    return 0;
}
