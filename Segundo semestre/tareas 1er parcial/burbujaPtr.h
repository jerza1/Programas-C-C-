/* Biblioteca de funciones que implementa el ordenamiento
   por burbuja mejorado utilizando un apuntador a funcion
   para ordenar ascendente o descendentemente.
   @autor Ricardo Ruiz Rodriguez
*/
#define VERDADERO 1
#define FALSO     0

int ascendente(int a, int b){
   return b < a;
}

int descendente(int a, int b){
   return b > a;
}

void burbuja(int *a, const int n, int (*orden)(int, int)){
   int veces, i, aux, bandera = VERDADERO;

   for(veces = 1; veces < n && bandera; veces++){
      bandera = FALSO;
      for(i = 0; i < n - veces; i++)
         if((*orden) (a[i], a[i + 1])){
            aux = a[i];
            a[i] = a[i + 1];
            a[i + 1] = aux;
            bandera = VERDADERO;
         }
   }
}
