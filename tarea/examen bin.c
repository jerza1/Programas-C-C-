#include <stdio.h>
int main()
{
    int n,mod,aux=0,cont=0;
    scanf("%d",&n);
    while(n!=0)
    {
      mod=n%2;
      if(mod==1)
        {
         cont++;
         if(cont>aux)
           aux=cont;
         }
      else
         cont=0;
      n=n/2;
    }
    printf("%d\n",aux);
system("Pause");
return 0;
}
