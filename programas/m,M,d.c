#include<stdio.h>

int main()

{
  
char letra;
  
scanf("%c",&letra);

  if(letra >= 'a' && letra <= 'z')

    {
      
printf("La letra es minuscula\n");

    }
      
else  if(letra >= 'A' && letra <='Z')

	{
         printf("Es mayuscula\n");

	}
      
else if (letra>= '0' && letra<= '9')

        {
 
printf("Es digito\n");

    }
  system("Pause");
return 0;

}
