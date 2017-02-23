#include <stdio.h>
void binario(int num);
int main(void)
{
int num;
scanf("%d",&num);
binario(num);
 system("Pause");
}
void binario(int i)
{
    if(i==0)
    {
       return;
       }
      binario(i/2);
      printf("%d\n",i%2);
}
