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
    
    int i;
    Conta * conta = (Conta *) malloc(5*sizeof(Conta));
    if(conta==NULL){
        printf("Sem memoria\n");
        exit(1);
    }

    for(i=0;i<5;i++){
    printf("Digite a Agencia: ");
    scanf("%d",&conta[i].agencia);

    printf("Digite a Conta: ");
    scanf("%d",&conta[i].conta);

    printf("Digite o Nome: ");
    scanf(" %[^\n]",conta[i].nome);

    printf("Digite a Senha(Apenas Numerica): ");
    scanf("%d",&conta[i].senha); 

    printf("Digite o Saldo: ");
    scanf("%f",&conta[i].saldo);

    printf("\n");
    }

    for(i=0;i<5;i++){
    printf("\nOs dados informados:\n Agencia: %d \t Conta: %d \t Nome: %s \t Senha: %d \t Saldo: R$ %.2f", conta[i].agencia, conta[i].conta, conta[i].nome, conta[i].senha, conta[i].saldo);       
    }

    return 0;
}
