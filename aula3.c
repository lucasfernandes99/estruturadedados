#include<stdio.h>

void incrementa(int *ponteiro){
    (*ponteiro)++;
}

int main(void){
    int var=2;
    printf("Var=%d\n",var);
    incrementa(&var);
    printf("Var=%d\n",var);
    return 0;
}