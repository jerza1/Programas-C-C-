#include <stdio.h>
main()
{
      int num,c=1;
      scanf("%d",&num);
      while(num!=1)
      {
         if(num%2==0)
             num=num/2;
         else
             num=(3*num)+1;
         c++;
      }
      printf("%d ",c);
      printf("\n");
getch();
}
