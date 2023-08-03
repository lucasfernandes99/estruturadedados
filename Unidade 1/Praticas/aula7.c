#include<stdio.h>
#include<stdlib.h>

typedef struct conta{
    int agencia;
    int conta;
    int senha;
    float saldo;
    char nome[20];
}Conta;

int main(void){
    
    Conta var_conta[5];
    int i;

    for(i=0;i<5;i++){
    printf("Digite a Agencia: ");
    scanf("%d",&var_conta[i].agencia);

    printf("Digite a Conta: ");
    scanf("%d",&var_conta[i].conta);

    printf("Digite o Nome: ");
    scanf(" %[^\n]",var_conta[i].nome);

    printf("Digite a Senha(Apenas Numerica): ");
    scanf("%d",&var_conta[i].senha); 

    printf("Digite o Saldo: ");
    scanf("%f",&var_conta[i].saldo);

    printf("\n");
    }

    for(i=0;i<5;i++){
    printf("\nOs dados informados:\n Agencia: %d \t Conta: %d \t Nome: %s \t Senha: %d \t Saldo: R$ %.2f", var_conta[i].agencia, var_conta[i].conta, var_conta[i].nome, var_conta[i].senha, var_conta[i].saldo);       
    }

    return 0;
}
