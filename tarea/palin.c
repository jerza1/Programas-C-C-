#include <stdio.h>
int palindromo(char cade[100]);
int main()
{
    char cade[100];
    gets(cade);
    if(palindromo==1)
    printf("Es palindromo\n");
    printf("no es palindromo\n");
    system("pause");
    return 0;
}
int palindromo(char cad[])
{
    int i,j;
    for(i=0;cad[i]!='\0';i++);
    for(j=i-1,i=0;j>i&&cad[i]==cad[j];j--,i++);
    if(j<i)
    {
    return 1;
}
    return 0;
}
    
