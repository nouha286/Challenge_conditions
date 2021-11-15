#include<stdio.h>
#include<stdlib.h>

float t;
int main()
{
	printf("entrez la temperature de l'eau ");
	scanf("%f",&t);
	
	if(t<=0)
		printf("Glace");
	else if ((t<=100) && (0<t))
		printf("Eau");
	else
		printf("Vapeur");
		
		
		return 0;
}
