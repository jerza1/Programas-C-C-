#include<stdio.h> 
int main() 
{ 
    int i,n,j;  
    scanf("%d",&n); 
    for(i=1;i<=n;i++)//El primer for es el que va a llevar las filas en donde se va a imprimir 
    { 
        for(j=1;j<=n-i;j++)//El Segundo for se encarga de imprimir un espacio si es que cumple la condicion que “j<=n-I” 
            printf(" "); 
        for(j=1;j<=i;j++)//El tercer for se encarga de imprimir un “*” si cumple la condición de que “j<=i” 
            printf("* "); 
        printf("\n");/*Al final de los for anteriores se imprime un salto de linea para que el cursor aparezca en   
                       la siguiente fila donde se desea imprimir*/ 
    } 
    /*Después de los primero 3 for anidados vienen otros 3 los cuales van a imprimir la parte de abajo del rombo, basicamente tienen 
la misma función que los for anteriores, simplemente cambian en algunas condiciones*/ 
    for(i=1;i<=n-1;i++) 
    { 
        for(j=1;j<=i;j++) 
            printf(" "); 
        for (j=1;j<=n-i;j++)  
            printf("* "); 
        printf("\n"); 
    } 
    system("pause");    
    return 0; 
}
