#include <stdio.h>
#include <math.h>
int main ()
{
  int a,b,c,disc;
  float x,y,R;
  scanf("%d %d %d",&a,&b,&c);
  disc=b*b-4*a*c;
  if(a!=0&&disc>0)
    {
      R=sqrt(disc);
      x=(-b-R)/2*a;
      y=(-b+R)/2*a;
      printf("x=%f\n",x);
      printf("y=%f\n",y); 
    }
  else
    {
      printf("No estan definidas\n");
    }
  return 0;
}
