#include <stdio.h>
int invertir(int num);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",invertir(num));
    system("Pause");
    return 0;
}
int invertir(int a)
{
    if(a==0)
    {
        return a/10;
                  }
                  return a+invertir(a/10);
                  
}
