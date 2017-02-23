#include<stdio.h>

int main(){
	int i,n, mod, cad[10], cont;
	for(i = 0; i < 10; i++)
		cad[i] = 0;
	printf("Ingresa el numero decimal: \n");
	scanf("%d",&n);
	
	for(i = 0; i < 10 || n != 0; i++){
		mod = n%2;
		cad[i] = mod;
		n = n/2;
		cont++;
	}
	for(i = 9; i >= 0; i--)
		printf("%d",cad[i]);
	printf("\n");
	system("PAUSE");
	return 0;
	} 
