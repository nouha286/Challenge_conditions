#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char lettre;

int main()
{
	printf("entrez une lettre ");
	scanf("%c",&lettre);
	
	switch(lettre)
	{
		case 'a' : printf("%c est un voyelle",lettre);
		break;
		case 'e' : printf("%c est un voyelle",lettre);
		break;
		case 'i' : printf("%c est un voyelle",lettre);
		break;
		case 'o' : printf("%c est un voyelle",lettre);
		break;
		case 'u' : printf("%c est un voyelle",lettre);
		break;
		case 'y' :printf("%c est un voyelle",lettre);
		break;
		default : printf("%c n''est pas un voyelle",lettre);
		 
		 return 0;
	}
}
