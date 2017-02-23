typedef struct{
        int a,b;
}COMPLEJOS;

typedef struct{
        int m,n;
        }dimensiones;
        
int menu(){
    int op;
    do{
    printf("\n\t*****MENU*****\n");
    printf("[1] Suma\n");
    printf("[2] Resta\n");
    printf("[3] Multiplicacion\n");
    printf("[4] Transpuesta\n");
    printf("[5] Simetrica\n");
    /*printf("[6] Inversa\n");*/
    printf("[6] Salir");
    printf("opcion?:");
    scanf("%d",&op);
   }while(op < 1 || op > 6);
   
return op;
}
void rango(dimensiones *r){
            do{
       printf("Dimensiones de la matriz( mayores a 2): ");
       scanf("%d,%d", &r->m, r->n);
       }while(r->m < 2 || r->n  < 2 ); 
       
       }
       
COMPLEJOS **consMatriz(int m, int n){
   COMPLEJOS **matriz = (COMPLEJOS **) malloc(m * sizeof(COMPLEJOS *));
   int i;
   
   if(matriz != NULL)
      for(i = 0; i < m; i++){
         matriz[i] = (COMPLEJOS *) malloc(n * sizeof(COMPLEJOS));
         if (matriz[i] == NULL)
            freeMatriz(matriz,m);
      }
 return matriz;
}

void llenaMatriz(COMPLEJOS **matriz, int m, int n){
   int i, j;
   
   for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
          printf("[%d][%d]:",i,j);
          printf("real = ");
          scanf("%d",&matriz[i][j].a);
          printf("imaginaria = ");
          scanf("%d",&matriz[i][j].b);
          }
          }
}

void  imprimeMatriz(COMPLEJOS **matriz, int m, int n){
   int i,j;
   
   for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        if(matriz[i][j].a== 0 && matriz[i][j].b == 0)
          printf("0 ");
         else if(matriz[i][j].b > 0)
           printf("\t%d+%di", matriz[i][j].a,matriz[i][j].b);
         else
           printf("\t%d%di", matriz[i][j].a,matriz[i][j].b);
     }
     printf("\n");
 }
 printf("\n");
}
void SUMA(COMPLEJOS **A, COMPLEJOS **B, COMPLEJOS **C, int m, int n){
     int i, j;
     for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
            C[i][j].a = A[i][j].a + B[i][j].a;
            C[i][j].b = A[i][j].b + B[i][j].b;
     }
     for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        if(C[i][j].a== 0 && C[i][j].b == 0)
          printf("0 ");
         else if(C[i][j].b > 0)
           printf("\t%d+%di", C[i][j].a,C[i][j].b);
         else
           printf("\t%d%di", C[i][j].a,C[i][j].b);
     }
     printf("\n");
 }
 printf("\n");
     
 }
}

void RESTA(COMPLEJOS **A, COMPLEJOS **B, COMPLEJOS **C, int m, int n){
     int i, j;
     for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
            C[i][j].a = A[i][j].a - B[i][j].a;
            C[i][j].b = A[i][j].b - B[i][j].b;
     }
     for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        if(C[i][j].a== 0 && C[i][j].b == 0)
          printf("0 ");
         else if(C[i][j].b > 0)
           printf("\t%d+%di", C[i][j].a,C[i][j].b);
         else
           printf("\t%d%di", C[i][j].a,C[i][j].b);
     }
     printf("\n");
 }
 printf("\n");
     
 }
 }
     
void MULTIPLICACION(COMPLEJOS **A, COMPLEJOS **B, COMPLEJOS **C, int m1, int n1, int m2, int n2){
     int i, j, k;
     for(i = 0; i < m1; i++){
      for(j = 0; j < n2; j++)
       for(k = 0; k < n1; k++){
            C[i][j].a += ((A[i][k].a * B[k][j].a) - (A[i][k].b * B[k][j].b));
            C[i][j].b += ((A[i][k].a * B[k][j].b) + (A[i][k].b * B[k][j].a));
     }
     }
     for(i = 0; i < m1; i++){
      for(j = 0; j < n2; j++){
        if(C[i][j].a== 0 && C[i][j].b == 0)
          printf("0 ");
         else if(C[i][j].b > 0)
           printf("\t%d+%di", C[i][j].a,C[i][j].b);
         else
           printf("\t%d%di", C[i][j].a,C[i][j].b);
     }
     printf("\n");
 }
 printf("\n");
     
 }
     
COMPLEJOS **TRANSPUESTA(COMPLEJOS **M, int m, int n){
          }
          
void SIMETRICA(COMPLEJOS **M, COMPLEJOS **T, int m, int n){
     }

void freeMatriz(COMPLEJOS **matriz,int m){
   int i;
   
   for(i = 0; i < m; i++)
      free(matriz[i]);
   
   free(matriz);
   matriz = NULL;
}
