#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float F;
float c;
int main()
{
	printf("entrez la température en fahrenheit  ");
	scanf("%f", &F);
	c= (F-32)/1.8;
	
	 	
	if ( c <= 0  )
	{
	printf("trés froid");
	}
	else if (c>0 && c<=15 )
{

	 printf("froid");
}
	 else if ((c>15) && (c<=30 ))
	 {
	 
	 printf("chaud");
	}
	 

	else if (30<c ) 
	{
	
	printf("très chaud");
	}
	 else
	 
	 {
	
	 printf("inexiste");
    }
	return 0;
}
