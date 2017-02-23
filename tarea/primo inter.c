#include <stdio.h>
main()
{
      int num1,num2,c=2,cont;
      printf("Ingresa 2 numeros\n");
      scanf("%d %d",&num1,&num2);
      for(cont=num1;num1<=num2;num1++)
      {
          while(num1%c !=0)
             { c=c+1;
             if(num1==c)
                printf("Es primo\n");
             else
                printf("No es primo\n");
                }
      }
      system("Pause");
return 0;
}
