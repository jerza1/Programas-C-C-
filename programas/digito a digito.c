/***Programa que imprime un numero digito a digito***/
#include <stdio.h>
main()
{
      int num,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10;
      scanf("%d",&num);
      printf("\n");
      if(num>=0&&num<=9)
      {
           printf("%d",num);
      }
      else if(num>=10&&num<=99)
           {
                 d1=num/10;
                 d2=num%10;
                 printf("%d\n%d",d1,d2);
           }
           else if(num>=100&&num<=999)
           {
                       d1=num/100;
                       d2=(num%100)/10;
                       d3=(num%100)%10;
                       printf("%d\n%d\n%d",d1,d2,d3);
           }
           else if(num>=1000&&num<=9999)
           {
                        d1=num/1000;
                        d2=(num%1000)/100;
                        d3=((num%1000)%100)/10;
                        d4=((num%1000)%100)%10;
           printf("%d\n%d\n%d\n%d",d1,d2,d3,d4);
           }
           else if(num>=10000&&num<=99999)
           {
                                   d1=num/10000;
                                   d2=(num%10000)/1000;
                                   d3=((num%10000)%1000)/100;
                                   d4=(((num%10000)%1000)%100)/10;
                                   d5=(((num%10000)%1000)%100)%10;
                                   printf("%d\n%d\n%d\n%d\n%d",d1,d2,d3,d4,d5);
           }
           else if(num>=100000&&num<=999999)
           {
                                   d1=num/100000;
                                   d2=(num%100000)/10000;
                                   d3=((num%100000)%10000)/1000;
                                   d4=(((num%100000)%10000)%1000)/100;
                                   d5=((((num%100000)%10000)%1000)%100)/10;
                                   d6=((((num%100000)%10000)%1000)%100)%10;
           printf("%d\n%d\n%d\n%d\n%d\n%d",d1,d2,d3,d4,d5,d6);
           }
           else if(num>=1000000&&num<=9999999)
           {
                                   d1=num/1000000;
                                   d2=(num%1000000)/100000;
                                   d3=((num%1000000)%100000)/10000;
                                   d4=(((num%1000000)%100000)%10000)/1000;
                                   d5=((((num%1000000)%100000)%10000)%1000)/100;
                                   d6=(((((num%1000000)%100000)%10000)%1000)%100)/10;
                                   d7=(((((num%1000000)%100000)%10000)%1000)%100)%10;
                                   printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",d1,d2,d3,d4,d5,d6,d7);
           }
           else if(num>=10000000&&num<=99999999)
           {
                                   d1=num/10000000;
                                   d2=(num%10000000)/1000000;
                                   d3=((num%10000000)%1000000)/100000;
                                   d4=(((num%10000000)%1000000)%100000)/10000;
                                   d5=((((num%10000000)%1000000)%100000)%10000)/1000;
                                   d6=(((((num%10000000)%1000000)%100000)%10000)%1000)/100;
                                   d7=((((((num%10000000)%1000000)%100000)%10000)%1000)%100)/10;
                                   d8=((((((num%10000000)%1000000)%100000)%10000)%1000)%100)%10;
           printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",d1,d2,d3,d4,d5,d6,d7,d8);
           }
           else if(num>=100000000&&num<=999999999)
           {
           d1=num/100000000;
           d2=(num%100000000)/10000000;
           d3=((num%100000000)%10000000)/1000000;
           d4=(((num%100000000)%10000000)%1000000)/100000;
           d5=((((num%10000000)%1000000)%100000)%10000)/1000;
           d6=(((((num%100000000)%10000000)%1000000)%100000)%10000)/1000;
           d7=((((((num%100000000)%10000000)%1000000)%100000)%10000)%1000)/100;
           d8=(((((((num%100000000)%10000000)%1000000)%100000)%10000)%1000)%100)/10;
           d9=(((((((num%100000000)%10000000)%1000000)%100000)%10000)%1000)%100)%10;
           printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",d1,d2,d3,d4,d5,d6,d7,d8,d9);
           }
           else if(num>=1000000000&&num<=2147483647)
           {
           d1=num/1000000000;
           d2=(num%1000000000)/100000000;
           d3=((num%1000000000)%100000000)/10000000;
           d4=(((num%1000000000)%100000000)%10000000)/1000000;
           d5=((((num%1000000000)%100000000)%10000000)%1000000)/100000;
           d6=(((((num%1000000000)%100000000)%10000000)%1000000)%100000)/10000;
           d7=((((((num%1000000000)%100000000)%10000000)%1000000)%100000)%10000)/1000;
           d8=(((((((num%1000000000)%100000000)%10000000)%1000000)%100000)%10000)%1000)/100;
           d9=((((((((num%1000000000)%100000000)%10000000)%1000000)%100000)%10000)%1000)%100)/10;
           d10=((((((((num%1000000000)%100000000)%10000000)%1000000)%100000)%10000)%1000)%100)%10;
           printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",d1,d2,d3,d4,d5,d6,d7,d8,d9,d10);
           }
           else
           {
               printf("Excede el limite");
               }
      printf("\n");
      getch();
      }