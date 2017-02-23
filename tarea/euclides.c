#include <stdio.h>
int residuo(int a, int b);
int main()
{
int a,b;
scanf("%d %d",&a,&b);
 printf("El MCD de %d entre %d = %d\n",a,b,mcd(a,b));
 system("Pause");
 return 0;
}
 int mcd(int i, int j)
{
    if(i%j==0)
    {
       return j;
       }
      return mcd(j,i%j); 
}
