#include <stdio.h>
void funcion(char B[]);
int main()
{
    char cad[100]={"hola"};
    printf("%s\n",cad);
    funcion(cad);
    printf("%s\n",cad);
    system("Pause");
    return 0;
}
void funcion(char A[])
{
     A[1]='x';
     }
