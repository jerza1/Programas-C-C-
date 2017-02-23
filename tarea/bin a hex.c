/*Programa que convierte un numero binario a hexadecimal*/
#include <stdio.h>
int main(){
        
   unsigned int masc=0xF0000000;
   int num,pos=32,hex;
   printf("Ingresa un numero en binario\n"),
   scanf("%d",&num);
   while(pos>0){
     pos=pos-4;
     hex=(num&masc)>>pos;
     masc=masc>>4;
     if(hex!=0)
        printf("%X",hex);
     }
   printf("\n");
   getch();
}
