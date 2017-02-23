//Ejercicio 4.25
#include <iostream>
using namespace std;
main(){
       int num, ceros = 1000000000, cont = 1;
       cout<<"Ingresa un numero binario ";
       cin>>num;
        while(num/ceros == 0)
             ceros = ceros/10;
        for( ; ceros >= 1; num = num % ceros, ceros = ceros/10){
             cout<< ceros*cont;
             cont *= 2;
            }
        return 0;
        }
