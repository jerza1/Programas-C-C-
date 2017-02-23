#include <stdio.h>
main()
{
      int anc,lar,carac,i,j;
      printf("Ingresa el largo,el ancho y el caracter\n");
      scanf("%d %d %c",&anc,&lar,&carac);
      for(i=1;i<=anc;i++)
      {
                         for(j=1;j<=lar;j++)
                         {
                                            printf("%c",carac);
                                            }
                                            printf("\n");
                                            }
getch();
}
