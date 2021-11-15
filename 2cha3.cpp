#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int a,b;

int main()
{
 printf("entrez un nombre entier ");
 scanf("%d",&a);
 b=a%2;
	
 if(b==0)
 {
  printf("le nombre est paire");
 }
	
 else
  printf("le nombre est impaire");
  return 0;
	
}

