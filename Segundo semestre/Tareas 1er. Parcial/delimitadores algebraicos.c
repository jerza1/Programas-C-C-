#include<stdio.h>
#include "pila.h"
#define TAM 50
int main()
{
    char cad[TAM],i;
    PILA mipila;
    int band=0;
    init(&mipila);
    printf("\nExpresion algebraica: ? \n\n");
    gets(cad);
    
    //printf("\nLa expresion tecleada es: %s\n",cad);
    
    for(i=0;cad[i]!='\0';i++){
        if(cad[i]=='[' || cad[i]=='{' || cad[i]=='(')
             push(&mipila,cad[i]);
        if(cad[i]==']' || cad[i]=='}' || cad[i]==')')
             if(empty(&mipila)){
                printf("\n\nEXPRESION INCORRECTA!!\n\n");
                band=1;}
             else
                switch(cad[i]){
                   case ')': if(pop(&mipila)!='('){
                               printf("\n\nEXPRESION INCORRECTA!!\n");
                               band=-1;}
                             break;
                   case ']': if(pop(&mipila)!='['){
                               printf("\n\nEXPRESION INCORRECTA!!\n");
                               band=-1;}
                             break;
                   case '}': if(pop(&mipila)!='{'){
                               printf("\n\nEXPRESION INCORRECTA!!\n");
                               band=-1;}
                             break;
                }        
          if(band==-1)
              break;
        }
    if(empty(&mipila) && band==0)
        printf("\n\nLA EXPRESION ES CORRECTA!!");
    else if(band==0)
        printf("\n\nEXPRESION INCORRECTA!!");
        
    getchar();
    getchar();
    return 0;
}
