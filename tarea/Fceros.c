#include <stdio.h>
int ceros(int num);
int main()
{
    int num;
    scanf("%d",&num);
    printf("Los ceros del numero %d son %d\n",num,ceros(num));
    system("Pause");
    return 0;
}
int ceros(int a)
{
    if(a==0)
        return 1;
                  if(a<10)
                  return 0;
                  if(a%10==0)
                  return 1+ceros(a/10);
                  return ceros(a/10);
}
