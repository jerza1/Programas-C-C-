#include <stdio.h>
main()
{
    int num,mod=0,sum=0,aux;
    scanf("%d",&num);
    aux=num;
    while(aux!=0)
    {
                 mod=aux%10;
                 sum=sum*10+mod;
                 aux=aux/10;
    }
    if(sum==num)
    {
    printf("Es capicua");
    }
    else
    {
    printf("No es capicua");
    }
    getch();
    }
