#include<stdio.h>
#include<stdlib.h>

typedef struct professor{
    char nome[50];
    char disciplina[100];
    int rt;
}Professor;

void cadastraProfessor (Professor *professor,int quant){
    
    int i;
    for(i=0;i<quant;i++){
        printf("\nDigite o nome:\n");
        scanf(" %[^\n]",professor[i].nome);
        printf("Digite a disciplina:\n");
        scanf(" %[^\n]",professor[i].disciplina);
        printf ("Digite o regime de trabalho:\n");
        scanf("%d",&professor[i].rt);
    }
}

void imprime (Professor *professor, int quant){
    int i;
    printf("Professores Cadastrados: \n");
    for (i=0;i<quant;i++){
        printf("Nome: %s\t Disciplina: %s\t Regime de Trabalho: %d horas\n",professor[i].nome,professor[i].disciplina,professor[i].rt);
    }
}

void alteraRegime(Professor *professor, int quant){
    int i;
    printf("\n");
    for(i=0;i<quant;i++){
        printf("Digite o novo regime de trabalho do professor %d: ", i+1);
        scanf("%d", &professor[i].rt);
    }
}

int main(void){
    int quant;
    Professor *professor= malloc(quant*sizeof(Professor));
    if(professor==NULL){
        exit(1);
    }
    printf("Digite a quantidade de Professores: ");
    scanf("%d",&quant);

    cadastraProfessor(professor,quant);
    imprime(professor,quant);
    alteraRegime(professor,quant);

    free(professor);

    return 0;
}
