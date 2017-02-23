#include <stdio.h>
int funcion(int n)
{
    if(n==0||n==1||n==2)
    return 1;
    return funcion(n-1)+funcion(n-2)+funcion(n-3);
}
int main()
{
    printf("%d\n",funcion(5));
    system("Pause");
    return 0;
}
