#include <stdio.h>
int main()
{
    int i;
    char cad[100];
    gets(cad);
    for(i=0;cad[i]!='\0';i++)
    {
                             if(cad[i]!=' ')
                             {
printf("%c",cad[i]);
}
}
printf("\n");
return 0;
}
