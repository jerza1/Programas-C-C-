#include <stdio.h>
#include "ARBOL.h"

int main(){
    ABB arbol;
    int aux;
    init(&arbol);
    inserta(&arbol, 7);
    inserta(&arbol, 2);
    inserta(&arbol, 6);
    inserta(&arbol, 20);
    inserta(&arbol, 16);
    printf("PREORDEN: \n"); preOrden(arbol.raiz);
    printf("\n");
    printf("ENORDEN: \n"); enOrden(arbol.raiz);
    printf("\n");
    printf("POSORDEN: \n"); posOrden(arbol.raiz);
    printf("\n");
    eliminar(&arbol, buscar(arbol.raiz, 2));
    printf("PREORDEN: \n"); preOrden(arbol.raiz);
    aux = Nivel(buscar(arbol.raiz, 2));
    printf("%d", aux);
    printf("\n");
    return 0;
}
