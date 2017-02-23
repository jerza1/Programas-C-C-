#include<stdio.h>
#include "piladinamica.h"
#define TAM 50

main()
{
    char cad[TAM];   
    
    PILA pila;
    int i,cont=0,num1,num2,band=1;
    
    init(&pila);
    printf("Expresion: ? \n\n");
    gets(cad);
    for(i=0;cad[i]!='\0' && band;i++){
        if(cad[i]>='0' && cad[i]<='9'){
            push(&pila,cad[i]-'0');
            cont++;}
        else if(cad[i]=='-' || cad[i]=='+' || cad[i]=='*' || cad[i]=='/'){
           if(empty(&pila)){
             printf("\n\nNO HAY ELEMENTOS PARA REALIZAR LA OPERACION!!\n");
             band=0;}
           else if(cont>=2){
             num1=pop(&pila);
             num2=pop(&pila);
             switch(cad[i]){
               case '-':  push(&pila,num2-num1);
                          break;
               case '+':  push(&pila,num1+num2);
                          break;
               case '*':  push(&pila,num1*num2);
                          break;
               case '/':  if(num1!=0)
                              push(&pila,num2/num1);
                          else
                             printf("\n\nDIVISION INDEFINIDA\n");
                          break;               
           }}
          if(cont==1){
              printf("\n\nLA EXPRESION DADA NO ES POSFIJA!!\n\n");
              band=0;}
          }
        }            
    if(band)
       printf("\n\nEL RESULTADO ES: %d",pop(&pila));
    getchar();
    getchar();
    return 0;
}
