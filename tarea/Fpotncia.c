#include <stdio.h>
int potencia(int , int );
int main()
{
int num,poten;
scanf("%d %d",&num,&poten);
 printf("La potencia de %d elevado a %d es %d \n",num,poten,potencia(num,poten));
 system("Pause");
 return 0;
}
 int potencia(int a, int b)
{
    if(b==0)
    {
       return 1;
       }
      if(b&1)
      {
      return a*potencia(a,b/2)*potencia(a,b/2);
      }
      return potencia(a,b/2)*potencia(a,b/2);
}
