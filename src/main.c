//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#define   seuil 3
#define   SEUILH -100
#define   SEUILB 200 

int main(void)
{
    unsigned long long int bin[10]={0,1,2,3,4,5,6,7,8,9};
	unsigned char i1,i2,i3,n,m;
    int  sat[10]={rand()%200-200} ,dist[10]={1,9,9,8,1,2,0,9,7,3};
    int  a[5]={1,5,9,8,11},b[5],miroir[6]={11,22,33};
    for(i1=0;i1<10;i1=i1+1)
    {
      if(bin[i1]>seuil)
         bin[i1]=1; 
      else						
         bin[i1]=0;   
    }
    
    for(i2=0;i2<10;i2=i2+1)
	sat[i2]= rand()%200-200;
	
    for(i2=0;i2<10;i2=i2+1)
	{
		if(sat[i2]>SEUILH)
        sat[i2]=SEUILH;
        else if(sat[i2]<SEUILB)
        sat[i2]=SEUILB;
        else
        sat[i2]=sat[i2];
    }

    for(i3=9;i3>1;i3=i3-1)
    {
        dist[i3]=dis[i3]-dis[i3-1];
    }

    for(n=0;n<5;n=n+1)
    {
      b[n]=a[4-n];
    }

    for(m=0;m<3;m=m+1)
    {
     miroir[m]=miroir[5-m];
    }

    return 0;					  
}
