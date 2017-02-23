#include <stdio.h>
int residuo(int a, int b);
int main()
{
int a,b;
scanf("%d %d",&a,&b);
 printf("Residuo de %d entre %d = %d\n",a,b,residuo(a,b));
 system("Pause");
 return 0;
}
 int residuo(int i, int j)
{
    if(i<j)
    {
       return i;
       }
      return residuo(i-j,j); 
}
