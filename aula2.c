#include<stdio.h>

int main(void){
    
    float var=2.5;
    float *ponteiro;
    ponteiro=&var;
    printf("Var= %f \n Ponteiro= %p", var, ponteiro);
    return 0;
}