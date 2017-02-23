#include <stdio.h>
int main()
{
    char cad[100];
    int i,j;
    gets(cad);
    for(i=0;cad[i]!='\0';i++);
    i=i-1;
    for(j=0;j<i&&cad[j]==cad[i];i--,j++);
    if(cad[j]==cad[i])
    {
                      printf("Es palindromo\n");
                      }
                      else
                      {
                          printf("No es palindromo\n");
                          }
                          system("Pause");              
return 0;
}
