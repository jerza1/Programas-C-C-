#include <stdio.h>
main()
{
    int num,ceros=1000000000;
    scanf("%d",&num);
    printf("\n");
    while(num/ceros==0)
    {
                       ceros=ceros/10;
    }
    for(;ceros>=1;num=num%ceros,ceros=ceros/10)
    {
    printf("%d\n",num/ceros);
    }
    getch();
    }
