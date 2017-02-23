#include <stdio.h>
int main()
{
    int acarreo,i,j,k;
    char cad1[1000],cad2[1000],cad[1000];
    scanf("%d",cad1);
    scanf("%d",cad2);
    for(j=0;cad1[j]!='\0';j++);
    for(k=0;cad2[k]!='\0';k++);
    for(i=j;i>=0;i--)
    {
       cad[i]=((cad1[i]-48+cad2[i]-48)%10+48)+acarreo;
       acarreo=(cad1[i]-48+cad2[i]-48)/10;
       }
       printf("%d",cad[i]);
       system("Pause");
       return 0;
       }
