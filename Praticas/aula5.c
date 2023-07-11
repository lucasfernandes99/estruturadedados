#include<stdio.h>
#include<stdlib.h>

typedef struct pessoa{
    char nome[20];
    int idade;
    int RG;
    float altura;
}Pessoa;

int main(void){
    
    Pessoa var_pessoa;

    printf("Digite o nome: ");
    scanf("%[^\n]",var_pessoa.nome);

    printf("Digite a idade: ");
    scanf("%d",&var_pessoa.idade);

    printf("Digite o RG: ");
    scanf("%d",&var_pessoa.RG); 

    printf("Digite a Altura: ");
    scanf("%f",&var_pessoa.altura);

    printf("Os dados informados:\n Nome: %s \t Idade: %d \t RG: %d \t Altura: %.2f", var_pessoa.nome, var_pessoa.idade, var_pessoa.RG, var_pessoa.altura);       

    return 0;
}
