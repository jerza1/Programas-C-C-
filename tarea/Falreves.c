#include <stdio.h>
void alreves(int num);
int main()
{
    int num;
    scanf("%d",&num);
    alreves(num);
    printf("\n");
    system("Pause");
    return 0;
}
void alreves(int a)
{
    if(a<1)
    {
        return;
                  }
                  printf("%d",a%10);
                  alreves(a/10);
                  
}
