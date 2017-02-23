#include <stdio.h>
float promedio(float a1,float b1,float c1,float d1);
int main()
{
    float a,b,c,d,r;
    int alum,i;
    scanf("%d",&alum);
    for(i=0;i<alum;i++)
        {
           scanf("%f %f %f %f",&a,&b,&c,&d);
           r=promedio(a,b,c,d);
            printf("%f\n",r);
        }
        system("Pause");
return 0;
}
float promedio(float a1,float b1,float c1,float d1)
{
      return (a1+b1+c1+d1)/4;
}
