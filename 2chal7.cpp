#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int annee,jours,mois,min,sec,hrs,choix;

int main()
{
	printf("entrez une annee \n");
	scanf("%d",&annee);
	
	 printf("1.Mois \n 2.Jours \n 3.Heures \n 4.Minutes \n 5.Secondes \n ");
	 scanf("%d",&choix);
	 mois=12;
	 annee=annee%4;
	
	 if(annee==0)
	 {
	 	jours=366;
	 }
	 else if(annee!=0)
	 {
	 	jours=365;
	 }
	 
	 hrs=jours*24;
	 min=hrs*60;
	 sec=min*60;
	 
	 switch(choix)
	 {
	 	case 1 : printf("%d mois",mois);
	 	break;
	 	case 2 : printf("%d jours",jours);
	 	break;
	 	case 3 : printf("%d heures",hrs);
	 	break;
	 	case 4 : printf("%d minutes",min);
	 	break;
	 	case 5 : printf("%d secondes",sec);
	 	break;
	 	default : printf("choix invalide");
	 }
	 return 0;
}
