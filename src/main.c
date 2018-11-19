//  Copyright (c) 2018 Antoine Tran Tan
//


#include "stdlib.h"

#define RAND_MAX 32767

int main(void)
{
    unsigned short int n1=0,n2=0,i=0;
    unsigned long  int rand()%10+1;
    unsigned short int val1=0,val2=0,a=0;
    unsigned long  int S1=0,S2=0,S3=0,S4=0;
    

    while(n1<9999){
     S1=S1+n1;
     n1=n1+3;
    }
    
    while(n2<9876){
     S2=S2+n2;
     n2=n2+3;
    }
    
    while(i<12){
     S3=S3+(rand()%10+1);
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
