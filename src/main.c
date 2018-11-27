//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{
   void initialiserTirage(void)
   short tirerNumero(void)
   unsigned char joueur[6]={11,22,33,44,3,9},gagnant[6]={3};
   unsigned char i,j,m,g=0;
  
   for(m=0;m<100;m++)
   {

      for(j=0;j<6;j++)
   {
       initialiserTirage();
       gagnant[j]=tirerNumero();
   }
     
      for(i=0,j=0;i<6,j<6;i++,j++)
   {
       if(joueur[i]==gagnant[j])
       g++;
   }
   }
   
   

    
    
    
    
    
    
    
    return 0;
}
