#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l,float *area,float *perimetro){
  *area=(3*pow(l,2)*sqrt(3))/2;
  *perimetro=6*l;
}

int main(void){
  float lado,a,p;
  printf("Digite o lado do hexagono:\n");
  scanf("%f",&lado);

  calcula_hexagono(lado,&a,&p);

  printf("\nArea=%.2f\tPerimetro=%.2f",a,p);

  return 0;
}