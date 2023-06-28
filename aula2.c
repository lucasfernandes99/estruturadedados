#include<stdio.h>

int main(void){
    
    float var=2.5;
    float *ponteiro;
    ponteiro=&var;
    printf("Var= %f \n Ponteiro= %p\n", var, ponteiro);
    *ponteiro = 3.7;
    printf("Var= %f \n Ponteiro= %p\n", var, ponteiro);
    return 0;
}