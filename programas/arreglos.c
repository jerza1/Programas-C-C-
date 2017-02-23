#include <stdio.h>
int main()
{
    int i,j;
    char cad[10];
    scanf("%s",cad);
    for(i=0;cad[i]!='\0';i++);
    for(j=i-1;cad[j]!='\0';j--)
    {
    printf("%c",cad[j]);
}
printf("\n");

    return 0;
}
