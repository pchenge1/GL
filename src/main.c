//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"  
#include "TP_lib.h"

#define n=LancerDe()
int main(void)
{
  unsigned char n;
  unsigned long int S=0;

  while(n!=1){
  if(n%2==0){
  S=S+n;
 }
  else if(n==3){
  S=S*2;
 }
  else (n==5){
    if(S>=2){
    S=S-2;
   }
    else{
    S=0;
   }
 }
  


return 0;
}
