#include<stdio.h>
#include<stdlib.h>

typedef struct conta{
    char nome[20];
    int agencia;
    int conta;
    char senha[20];
    float saldo;
}Conta;

Conta * cadastraContas(void){

    int qnt_contas;
    printf("Informe a quantidade de contas a ser cadastradas\n");
    scanf("%d",&qnt_contas);

    Conta * vetor_contas = (Conta*) malloc(qnt_contas*sizeof(Conta));
    if (vetor_contas == NULL){
        printf("Nao ha memoria!\n");
        exit(1);
    }

    int i;
    for(i=0;i<qnt_contas;i++){
        printf("\nDigite o nome: \n");
        scanf(" %[^\n]",vetor_contas[i].nome);

        printf("Digite a agencia: \n");
        scanf("%d",&vetor_contas[i].agencia);

        printf("Digite a conta: \n");
        scanf("%d",&vetor_contas[i].conta);

        printf("Digite a senha: \n");
        scanf(" %[^\n]",vetor_contas[i].senha);

        printf("Digite o saldo: \n");
        scanf("%f",&vetor_contas[i].saldo);
    }

    return vetor_contas;

}

void imprime(Conta * vetor_contas, int qnt_contas){
    int i;
    for(i=0;i<qnt_contas;i++){
        printf("\nDados Informados:\nNome: %s \t Agencia: %d \t Conta: %d \t Senha: %s \t Saldo: R$ %.2f", vetor_contas[i].nome, vetor_contas[i].agencia, vetor_contas[i].conta, vetor_contas[i].senha, vetor_contas[i].saldo);
    }
}


int main(void){

    int qnt_contas;
    Conta * vetor_contas = cadastraContas();

    printf("\nInforme a quantidade de contas\n");
    scanf("%d",&qnt_contas);

    imprime(vetor_contas, qnt_contas);

    return 0;
}
