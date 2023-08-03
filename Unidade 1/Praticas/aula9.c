#include<stdio.h>
#include<stdlib.h>

typedef struct funcionario{
    char nome[20];
    float salario;
    int idade;
    char cargo[20];
}Funcionario;

Funcionario * cadastraFuncionario(void){

        int qnt_funcionarios;
    printf("Informe a quantidade de funcionarios a ser cadastrados\n");
    scanf("%d",&qnt_funcionarios);

    Funcionario * vetor_funcionarios = (Funcionario*) malloc(qnt_funcionarios*sizeof(Funcionario));
    if (vetor_funcionarios == NULL){
        printf("Nao ha memoria!\n");
        exit(1);
    }

    int i;
    for(i=0;i<qnt_funcionarios;i++){
        printf("\nDigite o nome: \n");
        scanf(" %[^\n]",vetor_funcionarios[i].nome);

        printf("Digite a idade: \n");
        scanf("%d",&vetor_funcionarios[i].idade);

        printf("Digite o salario: \n");
        scanf("%f",&vetor_funcionarios[i].salario);

        printf("Digite o cargo: \n");
        scanf(" %[^\n]",vetor_funcionarios[i].cargo);
    }

    return vetor_funcionarios;

}

void imprime(Funcionario * vetor_funcionarios, int qnt_funcionarios){
    int i;
    for(i=0;i<qnt_funcionarios;i++){
        printf("\nDados Informados:\nNome:%s \t Idade: %d \t Salario: %f \t  Cargo: %s", vetor_funcionarios[i].nome, vetor_funcionarios[i].idade, vetor_funcionarios[i].salario, vetor_funcionarios[i].cargo);
    }
}


int main(void){

    int qnt_funcionarios;
    Funcionario * vetor_funcionarios = cadastraFuncionario();

    printf("Informe a quantidade de funcionarios\n");
    scanf("%d",&qnt_funcionarios);

    imprime(vetor_funcionarios, qnt_funcionarios);

    return 0;
}
