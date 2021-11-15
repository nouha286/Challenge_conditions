#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a,b,somme;

int main()
{
	printf("entrez la valeur de a \n");
	scanf("%d",&a);
	printf("entrez la valeur de b \n");
	scanf("%d",&b);
	
	if(a==b)
	{
	printf("la somme est :%d", 3*(a+b));	;
		
	}
	
	else
	{
	
	printf("la somme est :%d", a+b);
	}
	
	return 0;
}

