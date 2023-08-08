#include<stdio.h>
#include<stdlib.h>

typedef struct frutas{
    char nome[50];
    float valor;
}Frutas;

int main(void){

    int i=0;
    char n;

    Frutas * fruta = (Frutas*) malloc(sizeof(Frutas));
    if(fruta==NULL){
        printf("Memoria nao alocada!");
        exit(1);
    }

    FILE * entrada = fopen("Frutas.txt","wt");
    if(entrada==NULL){
        printf("Falha na abertura do arquivo!");
        exit(1);
    }

    printf("Cadastro de Frutas\n\n");
    fprintf(entrada,"Frutas Cadastradas\n\n");

    while(n!='N'){ 
        printf("\nDigite o Nome da Fruta: ");
        scanf(" %[^\n]",fruta[i].nome);
        printf("Digite o Valor da Fruta: R$ ");
        scanf("%f",&fruta[i].valor);
        fprintf(entrada,"Nome: %s , Valor: R$ %.2f\n",fruta[i].nome,fruta[i].valor);
        i++;

        printf("\nDeseja cadastrar mais uma fruta(S/N): ");
        scanf(" %[^\n]",&n);
    }

    printf("\n\nFrutas cadastradas com sucesso!");

    fclose(entrada);
    free(fruta);

    return 0;
}