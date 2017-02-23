#include <stdio.h>
int digito(int a);
int main()
{
    int a;
    scanf("%d",&a);
    printf("Los digitos de %d son %d\n",a,digito(a));
    system("Pause");
    return 0;
}
int digito (int num)
{
    if(num<10)
    {
                  return 1;
                  }
                  return digito(num%10)+digito(num/10);
}
