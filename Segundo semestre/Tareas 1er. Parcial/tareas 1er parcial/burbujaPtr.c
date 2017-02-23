/* Programa de prueba para la biblioteca de funciones que implementa
   el ordenamiento por burbuja utilizando un apuntador a funcion.
   @autor Ricardo Ruiz Rodriguez
*/
#include <stdio.h>
#include "burbujaPtr.h"

void imprimeArreglo(const int *, const int);

int main(){
   int orden;
   int a[ ] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   printf("Datos en el orden original:\n");
   imprimeArreglo(a, 10);
   printf("Datos en orden ascendente:\n");
   burbuja(a, 10, ascendente);
   imprimeArreglo(a, 10);
   printf("Datos en orden descendente:\n");
   burbuja(a, 10, descendente);
   imprimeArreglo(a, 10);

   return 0;
}

void imprimeArreglo(const int *a, const int n){
   int i;
   
   for(i = 0; i < n; i++)
      printf("%d ", a[i]);
   putchar('\n');
}
