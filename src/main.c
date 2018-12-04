#include <ansi_c.h>
//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
   
    unsigned char nom[100],prenom[100];
	unsigned int annee_de_naissance;
	
	printf("nom ");
	scanf("%s",nom );
	printf("prenom ");
	scanf("%s",prenom );
	printf("annee_de_naissance "); 
	scanf("%u",&annee_de_naissance );
	
	printf("Je m'appelle %s %s et j'ai %u ans",nom,prenom,annee_de_naissance); 
	
    getchar();
	
	
	return 0;
}
