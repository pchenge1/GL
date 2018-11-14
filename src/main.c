//  Copyright (c) 2018 Antoine Tran Tan
//


#include "stdlib.h"

#define RAND_MAX 32767

int main(void)
{
    unsigned short int n1=0;
	 unsigned short int n2=0;
    unsigned short int i=0;
    unsigned long  int r=(rand()%10)+1;
    unsigned short int val1=0;
    unsigned short int val2=0;
    unsigned short int a=0;
    unsigned long int S1=0;													
    unsigned long int S2=0;
    unsigned long int S3=0;
    unsigned long int S4=0;
    

    while(n1<9999){
     S1=S1+n1;
     n1=n1+3;
    }
    
    while(n2<9876){
     S2=S2+n2;
     n2=n2+3;
    }
    
    while(i<12){
     S3=S3+r;
     i=i+1;
    }

    while(a<21){
     if(val1%3==0||val2%7==0)
     {S4=S4+val1;
     a=a+1;
	 val1=val1+1;
     val2=val2+1;
	 }
     else
	 {
     val1=val1+1;
     val2=val2+1;
	 }
    }
    
    
    return 0;
}
