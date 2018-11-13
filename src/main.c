//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "math.h"

#define ECART 1e-10

int main(void)
{
    double a =1.0,b=2.0,c=3.0;
    double delta;
    unsigned char nb_solution;

    delta =b*b-4.0*a*c;
    
    if(_fabs(delta)<ECART)
       nb_solution=1;
    else if (delta>ECART)
       nb_solution=2;
    else
       nb_solution=0;
	return 0;
}
