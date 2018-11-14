//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"  
#include "TP_lib.h"

#define n=LancerDe()
int main(void)
{
  unsigned short int n;
  unsigned long int s=0;

  while(n!=1){
  if(n%2==0){
  s=s+n;
 }
  else if(n==3){
  s=s*2;
 }
  else (n==5){
    if(s>=2){
    s=s-2;
   }
    else{
    s=0;
   }
 }
  


return 0;
}
