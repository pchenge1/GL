//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#define   seuil 3
#define   SEUILH -100
#define   SEUILB 200 
#define   N 5 
int main(void)
{
    unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9},i1,i2,i3,i4,i5;
	unsigned int  sat[10]=rand(),dist[10],a[5]={1,5,9,8,11},b[5],miroir[5];
   
    for(i1=0;i1<10;i1=i1+1)
    {
      if(bin[i1]>seuil)
         bin[i1]=1; 
      else						
         bin[i1]=0;   
    }
    
    for(i2=0;i2<10;i2=i2+1)
	{
		if(sat[i2]>SEUILH)
        sat[i2]=SEUILH;
        else if(sat[i2]<SEUILB)
        sat[i2]=SEUILB;
        else
        sat[i2]=sat[i2];
    }

    for(i3=0;i3<10;i3=i3+1)
    {
        if(dist[i3]!=0)
        dist[i3]=distance;
        else
        dist[i3]=0;
    }

    for(i4=0;i4<10;i4=i4+1)
    {
      b[]=a[];
    }

    for(i5=0;i5<10;i5=i5+1)
    {
     miroir
    }

    return 0;					  
}
