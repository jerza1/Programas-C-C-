#include <stdio.h>
main()
{
 int a, b, c, d, cent, de, uni;
 printf("Introduce el dia\n");
 scanf("%d",&a);
 printf("Introduce el mes\n");
 scanf("%d",&b);
 printf("Introduce el año\n");
 scanf("%d",&c);
 int cons1 = 1000;
 switch(a)
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
   printf("diez");
   break;
  case 11:
   printf("Once");
   break;
  case 12:
   printf("Primero");
   break;
  case 13:
   printf("Dos"); 
   break;
  case 14:
   printf("tres");
   break;
  case 15:
   printf("Cuatro");
   break;
  case 16:
   printf("Cinco"); 
   break;
  case 17:
   printf("Seis");
   break;
  case 18:
   printf("Siete"); 
   break;
  case 19:
   printf("Ocho");
   break;
  case 20:
   printf("Nueve");
   break;
  case 21:
   printf("diez");
   break;
  case 22:
   printf("Once");
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
 }

 printf(" de ");


 switch(b)
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
  default:
   printf("El mes no es valido");
 }
 
 d = c / 1000;
 
 printf(" de ");

 switch(d)
 { 
  case 1:
   printf("Mil");
   break;
  case 2:
   printf("Dos mil"); 
   break;
 }
printf(" ");
d = c % 1000;
if(d >= 900)
{
 printf("Novecientos");
}
if(d >= 800 && d < 900)
{ 
 printf("Ochocientos");
}
if(d >= 700 && d < 800)
{
 printf("Setecientos");
}
if(d >= 600 && d < 700)
{
 printf("Seiscientos");
}
if(d >= 500 && d < 600)
{ 
 printf("Quinientos");
}
if(d >= 400 && d < 500)
{ 
 printf("Cuatrocientos");
}
if(d >= 300 && d < 400)
{
 printf("Trecientos");
}
if(d >= 200 && d < 300)
{
 printf("Doscientos");
} 
if(d >= 100 && d < 200)
{ 
 printf("Ciento");
}
printf(" ");

de = d % 100;


if(de >= 90)
{
 printf("Noventa");
}
if(de >= 80 && de < 90)
{ 
 printf("Ochenta");
}
if(de >= 70 && de < 80)
{
 printf("Setenta");
}
if(de >= 60 && de < 70)
{
 printf("Sesenta");
}
if(de >= 50 && de < 60)
{ 
 printf("Cincuenta");
}
if(de >= 40 && de < 50)
{ 
 printf("Cuarenta");
}
if(de >= 30 && de < 40)
{
 printf("Treinta");
}
if(de >= 20 && de < 30)
{
 printf("Vienti");
} 
if(de >= 10 && de < 20)
{ 
 printf("Diez");
}

printf(" y ");



uni = de % 10;

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
}
 printf("\n");
 getch();
}
