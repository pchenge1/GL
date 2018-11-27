//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{
   void initialiserTirage(void)
   short tirerNumero(void)
   unsigned char joueur[6]={11,22,33,44,3,9},gagnant[6]={0,0,0,0,0,0};
   unsigned char i,j,k,m,g=0;

   for(i=0,j=0;i<6,j<6;i++,j++)
   {
       if(joueur[i]=gagnant[j])
       g++;
   }

      for(k=0;k<6;k++)
   {
       initialiserTirage();
       gagnant[k]=tirerNumero();
   }

    for(m=0;m<100;m++)
   {
      
   }
   

    
    
    
    
    
    
    
    return 0;
}
