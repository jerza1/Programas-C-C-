/*Numero perfecto. La suma de sus divisores, exepto el mismo da igual al numero
eje. 6 = 1+2+3 , 28 = 1+2+4+7+14.*/
#include <stdio.h>
int p(int , int, int);  
int main(){
    int num;
    printf("Ingresar numero: ");
    scanf("%d", &num);
   if(p(num, 1, 0))
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
/*1 si es numero perfecto
  2  si no es un numero perfecto*/
/*int perfecto(int n){
     int div = 1, suma = 0;
  for(div = 1;n != div; div++ )
          if(n % div == 0)
               suma += div;
  if(n == suma)
  return 1;
  else 
  return 0;
}*/
