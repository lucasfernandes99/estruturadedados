#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;
    int c;


    fp = fopen("arquivo.txt","r");
    if(fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }
    else{
        printf("Arquivo criado com sucesso!\n");
    }

    c = fgetc(fp);
    printf("%c\n", c);

    if(!fclose(fp)){
        printf("\nArquivo fechado com sucesso!");
    }
    return 0;
}
