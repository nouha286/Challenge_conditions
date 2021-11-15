#include<stdio.h>
#include<stdlib.h>

float M;
int main()
{
	printf("entrez la moyenne de l'eleve ");
	scanf("%f",&M);
	
	if(M<10)
		printf("echoue!!");
	else if((M<12) && (10<=M) )
		printf("passable");
	else if((M<14) && (12<=M))
		printf("assez bien");
	else if((M<16) && (14<=M))
		printf("bien");
	else if((16<=M) && (M<18))
		printf("trés bien");
	else if((M<20) && (18<=M))
		printf("excelent!!");
		
		return 0;
}
