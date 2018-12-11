//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <math.h>
#include <stdio.h> 
 void main (void)
 {

	unsigned int a,b,c;
	int valeur_resisitance;
	printf("please put in the numbers:");
	scanf("%d %d %d", &a,&b,&c) ;
	valeur_resisitance=(10*a+b)*pow(10,c);
	printf("le valeur est %d ohm",valeur_resisitance) ;
	

	
	
	return 0
 }
