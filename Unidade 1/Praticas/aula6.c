#include<stdio.h>
#include<stdlib.h>

typedef struct pessoa{
    char nome[20];
    int idade;
    int RG;
    float altura;
}Pessoa;

int main(void){
    
    Pessoa var_pessoa[2];
    int i;

    for(i=0;i<2;i++){
    printf("Digite o nome: ");
    scanf(" %[^\n]",var_pessoa[i].nome);

    printf("Digite a idade: ");
    scanf("%d",&var_pessoa[i].idade);

    printf("Digite o RG: ");
    scanf("%d",&var_pessoa[i].RG); 

    printf("Digite a Altura: ");
    scanf("%f",&var_pessoa[i].altura);

    printf("\n");
    }

    for(i=0;i<2;i++){
    printf("\nOs dados informados:\n Nome: %s \t Idade: %d \t RG: %d \t Altura: %.2f", var_pessoa[i].nome, var_pessoa[i].idade, var_pessoa[i].RG, var_pessoa[i].altura);       
    }

    return 0;
}
