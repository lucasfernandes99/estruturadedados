#include<stdio.h>
#include<stdlib.h>
#include"funcionarios.h"

struct funcionarios{
    int id;
    char nome[50];
    float salario;
};

void cadastra_func(int quant){
    int i;
    for(i=0;i<quant;i++){
        printf("\nFuncionario %d\n\n",i+1);
        printf("Digite o ID: ");
        scanf("%d",&funcionario[i].id);
        printf("Digite o Nome: ");
        scanf(" %[^\n]",funcionario[i].nome);
        printf("Digite o Salario: R$ ");
        scanf("%f",&funcionario[i].salario);
    }
}

void abrir_arq(){
    FILE * entrada = fopen("Funcionarios.txt","wt");
    if(entrada==NULL){
        printf("Falha na abertura do arquivo!");
        exit(1);
    }
}

void imprime_arq(Funcionario, quant){
    int i;
    for(i=0;i<quant;i++){
        fprintf(entrada,"Funcionario %d\n",i+1);
        fprintf(entrada,"ID: %d\n",funcionario[i].id);
        fprintf(entrada,"Nome: %s\n",funcionario[i].nome);
        fprintf(entrada,"Salario: R$ %.2f\n\n",funcionario[i].salario);
    }

    printf("\n\nFuncionarios cadastrados com sucesso!");

}