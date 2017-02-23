#include <stdio.h>
main()
{
 int d, m, a, mi, cent, de, uni;
 printf("Dia\n");
 scanf("%d",&d);
 printf("Mes\n");
 scanf("%d",&m);
 printf("Anio\n");
 scanf("%d",&a);
 switch(d)
 {
  case 1:
   printf("Primero");
   break;
  case 2:
   printf("Dos"); 
   break;
  case 3:
   printf("Tres");
   break;
  case 4:
   printf("Cuatro");
   break;
  case 5:
   printf("Cinco"); 
   break;
  case 6:
   printf("Seis");
   break;
  case 7:
   printf("Siete"); 
   break;
  case 8:
   printf("Ocho");
   break;
  case 9:
   printf("Nueve");
   break;
  case 10:
   printf("Diez");
   break;
  case 11:
   printf("Once");
   break;
  case 12:
   printf("Doce");
   break;
  case 13:
   printf("Trece"); 
   break;
  case 14:
   printf("Catorce");
   break;
  case 15:
   printf("Quince");
   break;
  case 16:
   printf("Dieciseis"); 
   break;
  case 17:
   printf("Diecisiete");
   break;
  case 18:
   printf("Dieciocho"); 
   break;
  case 19:
   printf("Diecinueve");
   break;
  case 20:
   printf("Veinte");
   break;
  case 21:
   printf("Veintiuno");
   break;
  case 22:
   printf("Veintidos");
   break;
  case 23:
   printf("Veintitres");
   break;
  case 24:
   printf("Veinticuatro"); 
   break;
  case 25:
   printf("Veinticinco");
   break;
  case 26:
   printf("Veintiseis");
   break;
  case 27:
   printf("Veintisiete"); 
   break;
  case 28:
   printf("Veintiocho");
   break;
  case 29:
   printf("Veintinueve"); 
   break;
  case 30:
   printf("Treinta");
   break;
  case 31:
   printf("Treinta y uno");
   break;
  default:
   printf("El dia no es valido");
   break;
 }

 printf(" de ");


 switch(m)
 {
  case 1:
   printf("Enero");
   break;
  case 2:
   printf("Febrero"); 
   break;
  case 3:
   printf("Marzo");
   break;
  case 4:
   printf("Abril");
   break;
  case 5:
   printf("Mayo"); 
   break;
  case 6:
   printf("Junio");
   break;
  case 7:
   printf("Julio"); 
   break;
  case 8:
   printf("Agosto");
   break;
  case 9:
   printf("Septiembre");
   break;
  case 10:
   printf("Octubre");
   break;
  case 11:
   printf("Noviembre");
   break;
  case 12:
   printf("Diciembre");
   break;
  default:
   printf("El mes no es valido");
   break;
 }
 printf(" ");
 mi = a / 1000;
  switch(mi)
 { 
  case 1:
   printf("de Mil ");
   break;
  case 2:
   printf("del Dos mil "); 
   break;
 }
cent = (a % 1000)/100;
switch (cent)
{
       case 9:
            printf("Novecientos");
            break;
       case 8:
            printf("Ochocentos");
            break;
       case 7:
            printf("Setecientos");
            break;
       case 6:
            printf("Seiscientos");
            break;
       case 5:
            printf("Quinientos");
            break;
       case 4:
            printf("Cuatrocientos");
            break;
       case 3:
            printf("Trescientos");
            break;
       case 2:
            printf("Doscientos");
            break;
       case 1:
            printf("Ciento");
            break;
            default:
                    printf("");
                    break;          
}
printf(" ");

de = ((a % 1000)%100)/10;
switch (de)
{
       case 9:
            printf("Noventa y ");
            break;
       case 8:
            printf("Ochenta y ");
            break;
       case 7:
            printf("Setenta y ");
            break;
       case 6:
            printf("Sesenta y ");
            break;
       case 5:
            printf("Cincuenta y ");
            break;
       case 4:
            printf("Cuarenta y ");
            break;
       case 3:
            printf("Treinta y ");
            break;
       case 2:
            printf("Veinte y ");
            break;
       case 1:
            printf("Diez");
            break;
       default:
               printf("");
               break;
}
uni = ((a % 1000)%100)%10;

switch(uni)
 {
  case 1:
   printf("Uno");
   break;
  case 2:
   printf("Dos"); 
   break;
  case 3:
   printf("Tres");
   break;
  case 4:
   printf("Cuatro");
   break;
  case 5:
   printf("Cinco"); 
   break;
  case 6:
   printf("Seis");
   break;
  case 7:
   printf("Siete"); 
   break;
  case 8:
   printf("Ocho");
   break;
  case 9:
   printf("Nueve");
   break;
case 10:
   printf("Diez");
   break;
  case 11:
   printf("Once");
   break;
  case 12:
   printf("Doce");
   break;
  case 13:
   printf("Trece"); 
   break;
  case 14:
   printf("Catorce");
   break;
  case 15:
   printf("Quince");
   break;

}
 printf("\n");
 getch();
}
