#include<stdio.h>
#include<stdlib.h>

typedef struct funcionarios{
    int id;
    char nome[50];
    float salario;
}Funcionarios;

int main(void){

    int quant,i;

    Funcionarios * funcionario = (Funcionarios*) malloc(quant*sizeof(Funcionarios));
    if(funcionario==NULL){
        printf("Memoria nao alocada!");
        exit(1);
    }

    printf("Digite a quantidade de funcionarios a ser cadastrados: ");
    scanf("%d",&quant);

    for(i=0;i<quant;i++){
        printf("\nFuncionario %d\n\n",i+1);
        printf("Digite o ID: ");
        scanf("%d",&funcionario[i].id);
        printf("Digite o Nome: ");
        scanf(" %[^\n]",funcionario[i].nome);
        printf("Digite o Salario: R$ ");
        scanf("%f",&funcionario[i].salario);
    }

    FILE * entrada = fopen("Funcionarios.txt","wt");
    if(entrada==NULL){
        printf("Falha na abertura do arquivo!");
        exit(1);
    }

    for(i=0;i<quant;i++){
        fprintf(entrada,"Funcionario %d\n",i+1);
        fprintf(entrada,"ID: %d\n",funcionario[i].id);
        fprintf(entrada,"Nome: %s\n",funcionario[i].nome);
        fprintf(entrada,"Salario: R$ %.2f\n\n",funcionario[i].salario);
    }

    printf("\n\nFuncionarios cadastrados com sucesso!");

    fclose(entrada);
    free(funcionario);

    return 0;
}