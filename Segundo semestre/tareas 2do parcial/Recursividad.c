//Convierte a binario
void fy(int n){
     if(n == 0)
     return;
     fy(n/2);
     printf("%d", n % 2);
     return;
     }

//Numero de digitos
int fx(int n){
    if(n == 0)
    return 0;
    return 1+fx(n/10);
}
