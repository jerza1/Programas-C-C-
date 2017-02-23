#include <stdio.h>
main()
{
      int num,cont,fact,j;
      float res = 1,sum = 0;
      printf("Ingresa un num \n");
      scanf("%d",&num);
      for(cont=0;cont<=num;cont++)
         {
         res+=pow(num,cont);
         }
      for(fact=1,j=1;j<=num;j++)
         {
          fact=fact+j;
         }
      res=res/fact;
      sum=sum+res;
      printf(" %f ",sum);
getch();
}
                                                                  
