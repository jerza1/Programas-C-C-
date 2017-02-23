#include<stdio.h>
#include<stdlib.h> 
struct nodo
{
     struct nodo *previous;
     int data;
     struct nodo *next;
}*head, *last; 

void insert_begning(int value)
{
    struct nodo *var,*temp;
     var=(struct nodo *)malloc(sizeof(struct nodo));
     var->data=value;
     if(head==NULL)
     {
         head=var;
         head->previous=NULL;
         head->next=NULL;
         last=head;
     }
     else
     {
         temp=var;
         temp->previous=NULL;
         temp->next=head;
         head->previous=temp;
         head=temp;
     }
} 

void insert_end(int value)
{
     struct nodo *var,*temp;
     var=(struct nodo *)malloc(sizeof(struct nodo));
             var->data=value;
     if(head==NULL)
     {
          head=var;
          head->previous=NULL;
          head->next=NULL;
          last=head;
     }
     else
     {
         last=head;
         while(last!=NULL)
         {
             temp=last;
             last=last->next;
         }
     last=var;
     temp->next=last;
     last->previous=temp;
     last->next=NULL;
     }
}   

int insert_after(int value, int loc)
{
     struct nodo *temp,*var,*temp1;
     var=(struct nodo *)malloc(sizeof(struct nodo));
     var->data=value;
         if(head==NULL)
     {
           head=var;
           head->previous=NULL;
           head->next=NULL;
     }
     else
     {
           temp=head;
           while(temp!=NULL && temp->data!=loc)
           {
                 temp=temp->next;
           }
           if(temp==NULL)
           {
                printf("\n%d no esta en la lista ",loc);
           }
           else
           {
           temp1=temp->next;
           temp->next=var;
           var->previous=temp; 
          var->next=temp1;
           temp1->previous=var;
           }
     }
     last=head;
     while(last->next!=NULL)
     {
           last=last->next;
     }
}   
int delete_from_end()
{
      struct nodo *temp;
      temp=last;
      if(temp->previous==NULL)
      {
           free(temp);
           head=NULL;
           last=NULL;
           return 0;
      }
      printf("\nEl dato borrado de la lista es %d \n",last->data);
      last=temp->previous;
      last->next=NULL;
      free(temp);
      return 0;
} 

int delete_from_middle(int value)
{
    struct nodo *temp,*var,*t, *temp1;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data == value)
        {
             if(temp->previous==NULL)
             {
                  free(temp);
                  head=NULL;
                  last=NULL;
                  return 0;
             }
             else
             {
                  var->next=temp1;
                  temp1->previous=var;
                  free(temp);
                  return 0;
             }
        }
        else
        {
              var=temp;
              temp=temp->next;
              temp1=temp->next;
        }
    }
    printf("El dato borrado de la lista es %d",value);
}  

void display()
{
     struct nodo *temp;
     temp=head;
     if(temp==NULL)
      {
         printf("Lista vacia");
      }
     while(temp!=NULL)
     {
          printf("-> %d ",temp->data);
          temp=temp->next;
     }
} 

int main()
{
    int value, i, loc;
    head=NULL;
    printf("Selecciona una operacion de listas");
    printf("\n1.) Insertar frente\n2.) Insertar final\n3.) Insertar despues");
    printf("\n4.) Eliminar final\n5.) Eliminar nodo \n6.) exit");
    while(1)
    {
          printf("\n\nIngresa la operacion que deseas hacer ");
          scanf("%d",&i);
          switch(i)
          {
                case 1:
                {
                 printf("Ingresa el valor del nodo ");
                 scanf("%d",&value);
                 insert_begning(value);
                 display();
                 break;
                 }
                 case 2:
                 {
                 printf("Ingresa el valor del nodo final ");
                 scanf("%d",&value);
                 insert_end(value);
                 display();
                 break;
                 }
                 case 3:
                 {
                 printf("Despues de que datos quieres insertar");
                 scanf("%d",&loc);
                 printf("Ingresa el valor del nodo ");
                 scanf("%d",&value);
                 insert_after(value,loc);
                 display();
                 break;
                 }
                 case 4:
                 {
                 delete_from_end();
                 display();
                 break;
                 }
                 case 5:
                 {
                 printf("Ingresa el valor del nodo a borrar");
                 scanf("%d",&value);
                 delete_from_middle(value);
                 display();
                 break;
                 }
                 case 6 :
                 {
                      exit(0);
                      break;
                 }
          }
    }
    printf("\n\n%d",last->data);
    display();
    getch();
}
