#include <stdio.h>
int main()
{
    int m1 [3][3]={
    {2,3,7},
    {8,7,4},
    {4,9,5}
    };
    int m2[3][3]={
    {1,6,0},
    {9,5,2},
    {1,9,3}
    };
    int rest[3][3];
    int a,b,c;
    for(c=0;c<3;c++ )
    { 
         for (b=0;b<3;b++)
         {
             for(a=0;a<3;a++)
             {
                             rest[c][b]+=m1[c][a]*m2[a][b];
                             }
                             }
                             }
                             printf("%c",rest[c][b]);
                             system("Pause");
                 return 0;
                 }
