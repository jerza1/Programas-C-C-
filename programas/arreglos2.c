#include <stdio.h>
int main()
{
    int i,j;
    char cad[100];
    gets(cad);
    for(i=0;cad[i]!='\0';i++)
    {
    for(j=i;cad[j]!='\0';j++)
    {
    printf("%c",cad[j]);
}
printf("\n");
}
    system("Pause");
    return 0;
}
