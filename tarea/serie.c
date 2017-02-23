#include <stdio.h>
main()
{
      int num;
      scanf("%d",&num);
      printf("%d = ",num);
      while(num!=1)
      {
            if(num%2==0)
            num=num/2;
            else
            num=(3*num)+1;
         printf("%d ",num);
      }
      printf("\n");
getch();
}
                                   
