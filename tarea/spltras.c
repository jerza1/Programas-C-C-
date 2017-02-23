#include <stdio.h>
int main()
{
    int i,j,k,band=0,x,y,z;
    char cad[100],M[18][19]={
         {"BIAOCEDLAISFPKIIVY"},
         {"ECSEBUAPALBERTIBUX"},
         {"YRUBENDARIOKMGRFTD"},
         {"OCSYDDREMMJWKFFDZA"},
         {"ESCRONCEDARIOVOUEL"},
         {"SFPZCHACELEMKXCUAE"},
         {"YAZURQBADUNRECAGMC"},
         {"UIMQPUERDNAXIELABF"},
         {"ZYVZMOJZAYTFENVQAJ"},
         {"EZGGARCIAMARQUEZRS"},
         {"DXUNELLIUGUUOZLPOA"},
         {"NTVLNWALEREUQCEBJN"},
         {"AQCGOYTISOLOWKUQAT"},
         {"NPQYMFKZAOSNOLAMAO"},
         {"RWODIEGOKSABHNNSAS"},
         {"EHPONUMANUTMTTGEEZ"},
         {"HUAPYRPSWYLSADZIUZ"},
         {"PIVNAIROWZHNJWRGJC"}};
         printf("Programa que indica si la cadena que ingresa esta en la sopa de letras\n\n");
         for(x=0;x<18;x++)
         {
         for(i=0;i<18;i++)
         {printf("%c",M[x][i]);}
         printf("\n");}
         printf("\n");
         gets(cad);
for(x=18;x>=0;x--)//Busca la cadena en VERTICAL izquierda a derecha hacia abajo//
         {
         for(i=0;M[x][i]!='\0';i++)
         {y=x;
                             for(j=0,k=i;M[y][k]==cad[j];y--,j++);
                             if(cad[j]=='\0')
                             {band=1;break;}
         }
         if(cad[j]=='\0')
         {break;}
         }
         if(band==1)
{printf("Es subcadena\n");}
else{printf("No es subcadena\n");}
system("Pause");   
return 0;
}
