#include <stdio.h>
#include <time.h>
int main()
{
    int seg=3,i;
    time_t actual,empezar;
    for(i=1;i<=10;i++)
    {
        time(&empezar);
        do{
            time(&actual);
           }while(actual<=empezar+seg);
        printf("hola mundo\n");
    }
         system("Pause");
       return 0;
}
