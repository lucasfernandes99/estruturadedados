#include<stdio.h>
#include"funcionarios.h"

int main(void){
    int quant;

    Funcionarios * funcionario = (Funcionarios*) malloc(quant*sizeof(Funcionarios));
    if(funcionario==NULL){
        printf("Memoria nao alocada!");
        exit(1);
    }

    printf("Digite a quantidade de funcionarios a ser cadastrados: ");
    scanf("%d",&quant);

    cadastra_func(int quant);
    abrir_arq();
    imprime_arq(Funcionario, int quant);

    fclose(entrada);
    free(funcionario);

    return 0;

}