#include <stdio.h>
void digito(int num);
int main()
{
    int num;
    scanf("%d",&num);
    digito(num);
    system("Pause");
    return 0;
}
void digito(int a)
{
    if(a<1)
    {
        return;
                  }
                  digito(a/10);
                  printf("%d\n",a%10);
}
