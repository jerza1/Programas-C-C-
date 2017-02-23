#include <stdio.h>
main()
{
      int num,cont=1;
      for(num=30;num<=200;num++){
          printf("%d=%c\t",num,num);
          if(cont%4==0)
            printf("\n");
          cont=cont+1;
      }
      getch();
      }
