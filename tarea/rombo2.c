#include<stdio.h> 
int main() 
{ 
    /*B�sicamente es el mismo c�digo que el anterior pero ahora utilizaremos el while, simplemente cambian algunos 
detalles como el n�mero de variables, anteriormente solo usamos 3, pero ahora ser�n 6*/ 
    int i=1,n,j,h,k=1,m;/*como utilizaremos while debemos inicializar i=1 y k=1, podr�a decirse que son  
                          nuestras variables principales, claro adem�s de n que representa el n�mero dado por el  
                          usuario*/ 
    scanf("%d",&n); 
    while(i<=n)//El primer while lleva las filas en donde se va a imprimir 
    { 
        /*Antes del Segundo while inicializamos j=1y h=1 ya que si las inicializamos al inicio como i y k, 
al momento de compilar no va a imprimir nada*/ 
        j=1; 
        h=1; 
        while(j<=n-i)//El Segundo while imprime un espacio si se cumple la condici�n de �j<=n-I� 
        { 
            printf(" "); 
            j++; //Despues del printf se hace el aumento de j=j+1 o j++ 
        } 
        while(h<=i)//El tercer while imprime un �*� si se cumple la condici�n de �h<=i� 
        { 
            printf("* "); 
            h++;//Despues del printf se hace el aumento de h=h+1 o h++ 
        } 
        printf("\n");//Despues de los anteriores dos while se imprime un salto de linea 
        i++;//Despues del salto de linea se hace el aumento de i=i+1 o i++ 
    } 
    /*Aqu� necesitamos utilizar k, ya no podemos utilizar i porque i al ser usada en el anterior ciclo 
se modific� y ser�a in�til usarla ahora en este ciclo, adem�s estos ciclos son para imprimir la parte baja del rombo*/ 
    while(k<=n-1) 
    { 
        //j si podemos utilizarla nuevamente ya que la inicializamos dentro del ciclo 
        j=1; 
        m=1; 
        while(j<=k) 
        { 
            printf(" "); 
            j++; 
        } 
        while(m<=n-k) 
        {  
            printf("* "); 
            m++; 
        } 
        printf("\n"); 
        k++; 
    }
    system("pause"); 
    return 0; 
} 
