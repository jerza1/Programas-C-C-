#include <stdio.h>
int main()
{
     char cad[100];
     int i;
     printf("ingresa una cadena\n");
     gets(cad);
     for(i=0;cad[i]>='a'&&cad[i]<='z';i++)
     {
            
             cad[i]=cad[i]-32;
     }
      printf("%s\n",cad);
     system("Pause");
     return 0;
}
