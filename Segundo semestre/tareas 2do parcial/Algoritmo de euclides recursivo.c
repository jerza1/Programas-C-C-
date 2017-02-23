//Algortimo de euclides
#include <stdio.h>
int MCD(int m, int n){
    int r = m%n;
    while(r != 0){
         m = n;
         n = r;
         r = m%n;
         }
    return n;
}
//Recursivo de mcd

int mcd(int m, int n){
    if( m%n == 0)
       return n;
    return mcd( n, m%n);
}
int main(){
    
    printf("%d\n",mcd(12, 58));
    printf("%d\n",MCD(12, 58));
return 0;
}
    
