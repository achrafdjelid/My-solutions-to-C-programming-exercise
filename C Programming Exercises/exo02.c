// use give a number when user give 0 the is stop and chose between positive and negative 
#include <stdio.h>
int main()
{
    float x;
    int pc, nc;

    printf("enter number :");

pc = 0;
nc = 0;

    do {

    
    scanf("%f",&x);
    if(x>0){
    pc = pc + 1;
    }
    if(x<0){
    nc = nc + 1;
    }
    
    }
    while(x!=0);
    printf("nb of p is %d",pc);
    printf("        nb of n is %d",nc);


 }
