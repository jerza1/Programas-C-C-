#include <stdio.h>
int sumdig(int a);
int main()
{
    int a;
    scanf("%d",&a);
    printf("La suma de %d es %d\n",a,sumdig(a));
    system("Pause");
    return 0;
}
int sumdig (int num)
{
    if(num<10)
    {
                  return num;
                  }
                  return sumdig(num%10)+sumdig(num/10);
}
