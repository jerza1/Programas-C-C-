datatype repetir(PILA *p, int num){
         datatype cont = 0, dato;
         if(empty(p)){
            printf("");
            exit(0);
            }
         else{
             while(!empty(p)){
                   dato = pop(p);
                   if(dato == num){
                      cont ++;
                      push(p, dato);
                      }
                   else
                     push(p, dato);
                   }
             }
return cont;
}
#include <stdio.h>
int main(){
    
    return 0;
}   
