#include <stdio.h>
main()
{
      int num,c=2;
      scanf("%d",&num);
      while(num%c!=0)
         c=c+1;
      if(num==c)
         printf("Es primo\n");
      else
         printf("No es primo\n");
         
getch();
}
