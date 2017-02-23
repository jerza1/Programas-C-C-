#include <stdio.h>
int main()
{
    char cad[100],sub[100];
    int i,j,k,band=0;
    gets(cad);
    gets(sub);
    for(i=0;cad[i]!='\0';i++)
    {  k=i;
       for(j=0;sub[j]!='\0';)
          {
           if(cad[k]==sub[j])
             {j++;k++;}
           else
              break;
          }
      if(sub[j]=='\0')
      {band=1;
      break;
      }
    }
    if(band==1)
       printf("Es subcadena\n");
    else
       printf("No es subcadena\n");
return 0;
}
