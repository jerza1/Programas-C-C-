#include<stdio.h> 
int main() 
{ 
    int i,n,j,carac;
    printf("Ingresa el numero y el caracter\n");  
    scanf("%d %c",&n,&carac); 
    for(i=1;i<=n;i++)                             //El primer for es el que va a llevar las filas en donde se va a imprimir 
    { 
        for(j=1;j<=n-i;j++)                       //El Segundo for se encarga de imprimir un espacio 
            printf(" ");                          //si es que cumple la condicion que “j<=n-I” 
        for(j=1;j<=i;j++)                         //El tercer for se encarga de imprimir un “*” si cumple la condición de que “j<=i” 
            printf("%c ",carac);
    printf("\n");                                
    }
    system("pause"); 
return 0;
}
