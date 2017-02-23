#include <stdio.h>
#define N 100
#define TAM_NOM 50
#define TAM_TEL 20

typedef struct{
        int num;
        char nombre[TAM_NOM];
        char telefono[TAM_TEL];
}CONTACTO;

int main(){
    CONTACTO contacto = {0, "", ""};
    FILE *archivoPtr;
    int i;
    if((archivoPtr = fopen("contactos.dat", "wb")) == NULL)
       printf("El archivo no pudo ser abierto.\n");
    else{
         for(i = 0; i < N; i++)
             fwrite(&contacto, sizeof(CONTACTO), 1, archivoPtr);
         fclose(archivoPtr);
    }
return 0;
}
