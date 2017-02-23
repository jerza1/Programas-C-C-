#include<stdio.h>
int main()
{
    int j,i,letras[27]={0};
    char cad[1000000];
    gets(cad);
    for(i=0;cad[i]!='\0';i++)
    {
                             if(cad[i]>='a'&&cad[i]<='z')
                             {
                             letras[cad[i]-97]++;
                             }
    }
    for(i=0;i<27;i++)
    {
                     for(j=0;j<letras[i];j++)
                     {
                                             printf("%c",i+97);
                     }
    }
    printf("\n");
    system("Pause");
    return 0;
}
