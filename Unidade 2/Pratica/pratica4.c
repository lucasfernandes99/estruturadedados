#include<stdio.h>
#include<stdlib.h>

int main(void){
    char nome_arquivo[20];
    char c;

    printf("Informe o nome do arquivo:");
    scanf(" %[^\n]", nome_arquivo);

    FILE * arquivo = fopen(nome_arquivo,"w");
    if(arquivo == NULL){
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }
    else{
        printf("\nArquivo criado com sucesso!\n");
    }
    
    fputs("Hello World!!!\n", arquivo);
    fputc('A',arquivo);
    
    if(!fclose(arquivo)){
        printf("\nArquivo fechado com sucesso!\n");
    }
    
    return 0;
}
