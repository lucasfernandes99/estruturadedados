#include<stdio.h>

int soma(int valor1,int valor2){
    int sum = valor1+valor2;
    return sum;
}

int main(void){

    int (*p)(int,int)=soma;
    int res=p(2,3);

    printf("resultado=%d\n",res);
    
    return 0;
}