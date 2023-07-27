#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[50];
    int idade;
    int cpf;
}Pessoa;

void cadastraPessoa(Pessoa **pessoa, int quant){
    int i;
    for(i=0;i<quant;i++){
        printf("\nDigite o nome:\n");
        scanf(" %[^\n]", pessoa[i]->nome);

        printf("Digite a idade:\n");
        scanf("%d", &pessoa[i]->idade);
        
        printf("Digite o documento:\n");
        scanf("%d", &pessoa[i]->cpf);
    }
}

void imprime(Pessoa **pessoa, int quant){
    int i;
    printf("\nDados Informados:\n");
    for(i=0;i<quant;i++){
        printf("\nPessoa %d\n", i+1);
        printf("Nome:%s \t Idade: %d \t CPF: %d", pessoa[i]->nome, pessoa[i]->idade, pessoa[i]->cpf);
    }

}

void alteraIdade(Pessoa **pessoa,int quant){
    int i;
    printf("\n");
    for(i=0;i<quant;i++){
        printf("Digite a nova idade da pessoa %d: ", i+1);
        scanf("%d", &pessoa[i]->idade);
    }
}

void maiorMenorIdade(Pessoa **pessoa,int quant){
    int i,maior = 0,menor = 0;
    for (i=0;i<quant;i++){
        if (pessoa[i]->idade > pessoa[maior]->idade){
            maior=i;
        }
        if (pessoa[i]->idade < pessoa[menor]->idade){
            menor=i;
        }
    }
    printf("\nPessoa mais velha: %s \nPessoa mais nova: %s ", pessoa[maior]->nome, pessoa[menor]->nome);
} 

int main(void){
    int quant,i;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d",&quant);
    Pessoa **pessoa=(Pessoa**) malloc(quant*sizeof(Pessoa*));
    if(pessoa==NULL){
        printf("Memoria nao alocada");
        exit(1);
    }

    for(i=0;i<quant;i++){
        pessoa[i]=(Pessoa*) malloc(quant*sizeof(Pessoa));
    }

    cadastraPessoa(pessoa,quant);
    imprime(pessoa,quant);
    alteraIdade(pessoa,quant);
    maiorMenorIdade(pessoa,quant);

    for(i=0;i<quant;i++){
        free(pessoa[i]);   
    }

    free(pessoa);

    return 0;
}