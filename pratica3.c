#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    int c;
    int nlinhas = 0;

    fp = fopen("arquivo.txt","rt");
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }
    else{
        printf("Arquivo criado com sucesso!\n");
    }

    while((c = fgetc(fp)) != EOF){
        if(c=='\n')
            nlinhas++;
    }
    
    if(!fclose(fp)){
        printf("Arquivo fechado com sucesso!\n");
    }
    
    printf("\nNumero de Linhas: %d\n", nlinhas);

    return 0;
}
