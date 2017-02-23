#include <stdio.h>
main()
{
      int anc1,alto1,anc2,alto2,simb1,simb2,i,j;
      printf("Ingresa el ancho,largo y el caracter\n");
      scanf("%d %d %c",&anc1,&alto1,&simb1);
      for(j=0;i<=alto1;j++)
      {
                         for(i=0;i<=anc1;i++)
                         {
                                             if(i==0||i==(anc1-1)||j==0||j==alto1-1)
                                             {
                                            printf("%c",simb1);
                                            }
                                            else if(i>=(anc1/2-anc2/2)&&i<(anc1/2+anc2/2))
                                            {
                                                 printf("\n");
                                            }
                                            }
                                            }
getch();
}
