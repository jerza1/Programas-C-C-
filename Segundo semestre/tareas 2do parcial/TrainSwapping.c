#include <stdio.h>

int burbuja(int T[], int TAM);

int main(){
    int casos, vagones, i, j=0, aux, orden[50], *Tren;
    
    printf("Numero de casos de prueba:\n");
    scanf("%d",&casos);
    aux = casos;
    Tren = (int*) malloc(casos * sizeof(int));
    while(casos != 0){ 
       printf("\nNumero de vagones:?\n ");
       scanf("%d",&vagones);
       printf("\nOrden actual de los vagones: \n");
       for(i = 0; i < vagones; i++)
          scanf("%d",&orden[i]);
       
       Tren[j++] = burbuja(orden, vagones); 
       casos--;
    }

    for(i = 0; i < aux; i++)
    printf("\nEl intercambio optimo de trenes toma %d cambios", Tren[i]);

    free(Tren);
    return 0;
}  

int burbuja(int N[], int TAM){
  int i, j, aux, cont = 0;
  for (i = TAM - 1; i >0; i--)
    for (j = 0; j <= i-1; j++)
      if (N[j] > N[j+1]){
        aux = N[j+1];
        N[j+1] = N[j];
        N[j] = aux;
        cont++;
      }
  return cont;
}
