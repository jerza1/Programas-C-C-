#include <stdio.h>
int main()
{
    char cad[]="programacion";
    char *p=cad+5;
    while(*p)
    {
    printf("%c\n",*p);
    p++;
}
    system("Pause");
    return 0;
}
