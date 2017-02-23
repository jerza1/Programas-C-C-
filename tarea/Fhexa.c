#include <stdio.h>
void hexa(int num);
int main(void)
{
int num;
scanf("%d",&num);
hexa(num);
 system("Pause");
}
void hexa(int i)
{
    if(i==0)
    {
       return;
       }
      hexa(i/4);
      printf("%X\n",i%4);
}
