#include <stdio.h>
int main()
{
 int num,fact[100],i;
 scanf("%d",&num);
 fact[0]=1;
for(i=1;i<100;i++)
 {
    fact[i]=i*fact[i-1];                 
 }
 printf("Factorial de (%d)= %d\n",num,fact[num]);
 system("Pause");
 return 0;
 }
       
