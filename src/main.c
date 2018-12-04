//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
   char nom_fig[80],chaine[80];
   char phrase[80]="La figure pentagone_B possede 5 sommets avec cordonnees 10 20 30 20 30 40 43 53 35 65";
   unsigned char nb_pts,i,j;
   unsigned char x[5]={10,30,30,43,35},y[5]={20,20,40,53,65},a[10]; 
   sscanf(phrase"%*s %*s %s %*s %u %*s %*s %*s %u %u %u %u %u %u %u %u %u %u",nom_fig,%nb_pts,x[1],y[1],x[2],y[2],x[3],y[3],x[4],y[4],x[5],y[5]);
   if(nb_pts<5)
   for(i=2*nb_pts,i<10,i++)
   {a[10]=-1;}
   for(j=0,j<10,j++)
   {
   if(j%2==0)
   x[i/2]=a[j];
   else
   
   }
   sprintf(chaine,"La figure %s possede %u somments",nom_fig,&nb_pts);
   MessagePopup(pharse);
   return 0;
}
 