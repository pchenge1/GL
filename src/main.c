//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#define   seuil 3
#define   SEUILH -100
#define   SEUILB 100  
int main(void)
{
    unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9},i1,i2;
	unsigned int  sat[10]=rand()%200-300;
    for(i1=0;i1<10;i1=i1++)
    {
      if(bin[i]>seuil)
      {
         bin[i1]=1; 
      }
      else
      {						
         bin[i1]=0;   
      }
    }
    
    for(i2=0;i2<10;i=i2++)
	{
		if(sat[i2])>SEUILH
    return 0;					  
}
