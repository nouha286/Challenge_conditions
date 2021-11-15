#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int nbr ;
int main()
{

  printf("donner un entier :\n");
  scanf("%d",&nbr);
  if(nbr<0) 
  
    printf("le nbr %d est negatif",nbr);      
  else if (nbr>0)
      printf("le nbr %d est positif",nbr);      
    else
      printf("le nbr %d est nul",nbr);      
    
    return 0;
  

}
