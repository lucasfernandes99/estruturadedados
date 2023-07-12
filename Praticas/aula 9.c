#include<stdio.h>
#include<stdlib.h>

typedef struct funcionario{
    char nome[20];
    float salario;
    int identificador;
    char cargo[20];
}Funcionario;

Funcionario * cadastra_funcionario(void){
    Funcionario * funcionario = (Funcionario *) malloc(sizeof(Funcionario));
    if(funcionario==NULL){
        printf("Sem memoria\n");
        exit(1);
    }
    printf("Digite o nome: \n");
    scanf(" %[^\n]",funcionario->nome);

    printf("Digite o salario: \n");
    scanf("%f",&funcionario->salario);

    printf("Digite o identificador: \n");
    scanf("%d",&funcionario->identificador);

    printf("Digite o cargo: \n");
    scanf(" %[^\n]",funcionario->cargo);

    return funcionario;
}

void imprime(Funcionario *funcionario){
    printf("Dados Informados:\nNome:%s \t Salario: %f")
}

int main(void){

    Funcionario * funcionario = cadastra_funcionario();

    return 0;
}
