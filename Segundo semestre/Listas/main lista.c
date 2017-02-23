#include <stdio.h>
#include <stdlib.h>
#include "LISTA.h"

int main() {
   LISTA lista;
   init(&lista);
   Insertar(&lista, 20);
   Insertar(&lista, 10);
   Insertar(&lista, 40);
   Insertar(&lista, 30);

   MostrarLista(&lista);

  free(&lista);
   return 0;
}

