#include <stdio.h>
int p(int , int, int);  
int main(){
   if(p(6, 1, 0))
      printf("Es un numero perfecto\n");
   else
   printf("No es un numero perfecto\n");
    
    return 0;
}
int p(int n, int div,int suma){
    if(div <= n/2){
       if(n % div == 0)
       return p(n, div+=1, suma+=div);
       else 
       return p(n, div+=1, suma);
       }
    if(suma == n )
       return 1;
       else
       return 0;
}
