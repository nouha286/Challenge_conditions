#include<stdio.h>
#include<math.h>

float a,b,c,delta,x,x1,x2;
int main()
{
	printf("Sachant que l'équation s'écrit avec cette forme ax^2 + bx + c=0 \n");
 printf("entrez le facteur a \n");
 scanf("%f",&a);
 printf("entrez la valeur b \n");
 scanf("%f",&b);
 printf("entrez l'element c \n");
 scanf("%f",&c);
 delta=pow(b,2)-4*a*c;
  if(delta<0)
  {
   printf("l'equation n'admet pas une solution");
  }
  else if(delta==0)
  {
   x=(-b)/(2*a);
   printf("la solution est : %f ",x);
   
  }
  else
  {
   x1=(-b-sqrt(delta))/(2*a);
   x2=(-b+sqrt(delta))/(2*a);
   printf("l'equation admet deux solutions %f et %f",x1,x2);
  }
  
  
  return 0;
}

