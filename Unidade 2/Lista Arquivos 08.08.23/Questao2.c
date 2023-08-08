#include<stdio.h>
#include<stdlib.h>

typedef struct alunos{
    char nome[50];
    float n1;
    float n2;
    float n3;
}Alunos;

int main(void){

    int quant,i;

    Alunos * aluno = (Alunos*) malloc(quant*sizeof(Alunos));
    if(aluno==NULL){
        printf("Memoria nao alocada!");
        exit(1);
    }

    printf("Digite a quantidade de alunos a ser cadastrados: ");
    scanf("%d",&quant);

    for(i=0;i<quant;i++){
        printf("\nAluno %d\n\n",i+1);
        printf("Digite o Nome: ");
        scanf(" %[^\n]",aluno[i].nome);
        printf("Digite a Nota 1: ");
        scanf("%f",&aluno[i].n1);
        printf("Digite a Nota 2: ");
        scanf("%f",&aluno[i].n2);
        printf("Digite a Nota 3: ");
        scanf("%f",&aluno[i].n3);
    }

    FILE * entrada = fopen("Alunos.txt","wt");
    if(entrada==NULL){
        printf("Falha na abertura do arquivo!");
        exit(1);
    }

    for(i=0;i<quant;i++){
        fprintf(entrada,"Aluno %d\n",i+1);
        fprintf(entrada,"Nome: %s\n",aluno[i].nome);
        fprintf(entrada,"Nota 1: %.1f | Nota 2: %.1f | Nota 3: %.1f\n\n",aluno[i].n1,aluno[i].n2,aluno[i].n3);
    }

    printf("\n\nAlunos cadastrados com sucesso!");

    fclose(entrada);
    free(aluno);

    return 0;
}