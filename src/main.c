//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"  
#include "TP_lib.h"

int main(void)
{
  unsigned char n=rand()%6+1;
  unsigned long int S=0;


  while(n!=1){
  if(n%2==0){
  S=S+n;
 }
  else if(n==3){
  S=S*2;
 }
  else {
    if(S>=2){
    S=S-2;
   }
    else{
    S=0;
   }
 }
  


return 0;
}
