#include <stdio.h>
void swap(int *a,int *b);
int main()
{
    int x=30,y=50;
    swap(&x,&y);
    printf("X=%d Y=%d\n",x,y);
    printf("%p\n",&x);
    system("Pause");
    return 0;
}
void swap(int *a,int *b)
{
     int t;
     t=*a;
     *a=*b;
     *b=t;
     }
