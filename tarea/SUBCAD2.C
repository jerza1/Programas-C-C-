#include<stdio.h>
int main(void)
{
    char cad[100],sub[100];
    int i,j,k,band=0;
    gets(cad);
    gets(sub);
    for(i=0;cad[i]!='\0';i++)
    {
        for(j=0,k=i;cad[k]==sub[j];k++,j++);
           if(sub[j]=='\0')
             {
              band=1;
              break;
             }
    }
    for(i=i-1;i>=0;i--)
    {
        for(j=0,k=i;cad[k]==sub[j];j++,k--);
           if(sub[j]=='\0')
            {
             band=1;
             break;
            }
    }
    if(band==1)
    {
       printf("Es un subconjunto\n");
    }
    else
    {
       printf("No es un subconjunto\n");
    }
    return 0;
}
