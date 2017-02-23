typedef struct{
       int x,y;
       }PUNTO, VERTICE;
typedef struct{
       PUNTO p1,p2,p3,p4;
       }CUADRO, RECTANGULO;
typedef struct{
       VERTICE v1,v2,v3;
       }TRIANGULO;
typedef struct{
       PUNTO p;
       }coordenada;      
int menu(void){
   int op;
   do{
     printf("\n\t\t*** MENU ***\n");
     printf("\t[1] Triangulo\n");
     printf("\t[2] Cuadrado\n");
     printf("\t[3] Rectangulo\n");
     printf("\t[4] Relacion punto cuadro\n");
     printf("\t[5] Relacion punto rectangulo\n");
     printf("\t[6] Salir\n");
     printf("\tOpcion?: ");
     scanf("%d", &op);
   }while(op < 1 || op > 6);

   return op;
}

void leePunto(PUNTO *p){
     
   printf("Punto(Ejemplo: 3, 2): ");
   scanf("%d,%d", &p->x, &p->y);
   
}

void Triangulo(TRIANGULO *t){
   int lado1, lado2,lado3;
   printf("TRIANGULO\nVertice1:");
   leePunto(&t->v1);
   printf("Vertice2:");
   leePunto(&t->v2);
   printf("Vertice3:");
   leePunto(&t->v3);
   
   lado1 = sqrt ((poten(t->v1.x , t->v2.x) + poten(t->v1.y , t->v2.y)));
   lado2 = sqrt((poten(t->v2.x , t->v3.x) + poten(t->v2.y , t->v3.y)));
   lado3 = sqrt((poten(t->v3.x , t->v1.x) + poten(t->v3.y , t->v1.y)));
   
   if(t->v1.x == t->v2.x || t->v2.x == t->v3.x || t->v1.y == t->v2.y || t->v2.y == t->v3.y)
      printf("No es un triangulo\n");
   else if( lado1 == lado2 == lado3)
          printf("Es un triangulo equilatero\n");
   else if( lado1 != lado2 != lado3)
         printf("Es un triangulo escaleno\n");
   else 
          printf("Es un triangulo isoceles\n");
        
}

void Cuadrado(CUADRO *c){
   int dist,dist1,dist2,dist3;
   
   printf("CUADRADO\n1.");
   leePunto(&c->p1);
   printf("2.");
   leePunto(&c->p2);
   printf("3.");
   leePunto(&c->p3);
   printf("4.");
   leePunto(&c->p4);
   
   dist = sqrt ((poten(c->p1.x , c->p2.x) + poten(c->p1.y , c->p2.y)));
   dist1 = sqrt((poten(c->p2.x , c->p3.x) + poten(c->p2.y , c->p3.y)));
   dist2 = sqrt((poten(c->p3.x , c->p4.x) + poten(c->p3.y , c->p4.y)));
   dist3 = sqrt((poten(c->p4.x , c->p1.x) + poten(c->p4.y , c->p1.y)));
   
   if(c->p1.x == c->p2.x && c->p3.x == c->p4.x && c->p1.y == c->p4.y && c->p2.y == c->p3.y
   && dist == dist1 && dist2 == dist3)
         printf("Es un cuadrado\n");
   else
          printf("No es un cuadrado\n");
}

void Rectangulo(RECTANGULO *r){
     int dist1,dist2,dist3,dist4;
     
   printf("RECTANGULO\n1.");
   leePunto(&r->p1);
   printf("2.");
   leePunto(&r->p2);
   printf("3.");
   leePunto(&r->p3);
   printf("4.");
   leePunto(&r->p4);
   
   dist1 = sqrt ((poten(r->p1.x , r->p2.x) + poten(r->p1.y , r->p2.y)));
   dist2 = sqrt((poten(r->p2.x , r->p3.x) + poten(r->p2.y , r->p3.y)));
   dist3 = sqrt((poten(r->p3.x , r->p4.x) + poten(r->p3.y , r->p4.y)));
   dist4 = sqrt((poten(r->p4.x , r->p1.x) + poten(r->p4.y , r->p1.y)));
   
   if(r->p1.x == r->p2.x && r->p3.x == r->p4.x && r->p1.y == r->p4.y && r->p2.y == r->p3.y
   && dist1 != dist2 && dist3 != dist4 && dist1 == dist3 && dist2 == dist4)
         printf("Es un rectangulo\n");
   else
          printf("No es un rectangulo\n");
}
void PuntoC(coordenada *cor, CUADRO *c){
   leePunto(&cor->p);     
   if(cor->p.x == c->p1.x && c->p1.y < cor->p.y && cor->p.y <= c->p2.y || 
      cor->p.y == c->p2.y && c->p2.x < cor->p.x && cor->p.x <= c->p3.x ||
      cor->p.x == c->p3.x && c->p3.y > cor->p.y && cor->p.y >= c->p4.y ||
      cor->p.y == c->p4.y && c->p4.x > cor->p.x && cor->p.x >= c->p1.x)
      printf("El punto esta sobre el cuadro\n");
   else if(cor->p.x > c->p1.x && cor->p.x > c->p2.x && cor->p.x < c->p3.x && cor->p.x < c->p4.x &&
      cor->p.y > c->p1.y && cor->p.y < c->p2.y && cor->p.y < c->p3.y && cor->p.y > c->p4.y)
      printf("El punto esta dentro del cuadro\n");
   else 
      printf("El punto esta fuera del cuadro\n");
     
     }
void PuntoR(coordenada *cor,RECTANGULO *r){
     leePunto(&cor->p);     
     if(cor->p.x == r->p1.x && r->p1.y < cor->p.y && cor->p.y <= r->p2.y || 
        cor->p.y == r->p2.y && r->p2.x < cor->p.x && cor->p.x <= r->p3.x ||
        cor->p.x == r->p3.x && r->p3.y > cor->p.y && cor->p.y >= r->p4.y ||
        cor->p.y == r->p4.y && r->p4.x > cor->p.x && cor->p.x >= r->p1.x)
        printf("El punto esta sobre el rectangulo\n");
     else if(cor->p.x > r->p1.x && cor->p.x > r->p2.x && cor->p.x < r->p3.x && cor->p.x < r->p4.x &&
        cor->p.y > r->p1.y && cor->p.y < r->p2.y && cor->p.y < r->p3.y && cor->p.y > r->p4.y)
        printf("El punto esta dentro del rectangulo\n");
     else 
         printf("El punto esta fuera del rectangulo\n");
     
     }

int poten(int p, int p1){
    
    int resta, r;
    
    resta = p - p1;
    r = resta * resta; 
    
return r;
}
