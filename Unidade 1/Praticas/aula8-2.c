#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina{
    char nome[30];
    float nota;
}Disciplina;


typedef struct aluno{
    char nome[20];
    int matricula;
    Disciplina * disciplina;
}Aluno;

Aluno * cadastra_aluno(void){
    Aluno * aluno = (Aluno *) malloc(sizeof(Aluno));
    if(aluno==NULL){
        printf("Sem memoria\n");
        exit(1);
    }
    aluno->disciplina = (Disciplina*) malloc(sizeof(Disciplina));
    if(aluno->disciplina==NULL){
        printf("Sem memoria\n");
        exit(1);
    }

    printf("Digite o nome: \n");
    scanf(" %[^\n]",aluno->nome);

    printf("Digite a matricula: \n");
    scanf("%d",&aluno->matricula);

    printf("Digite o nome da disciplina: \n");
    scanf(" %[^\n]",aluno->disciplina->nome);

    printf("Digite a nota da disciplina: \n");
    scanf("%f",&aluno->disciplina->nota);

    return aluno;

}

int main(void){
    
    Aluno * aluno=cadastra_aluno();
    

    printf("Os dados informados:\n Nome: %s \t Matricula: %d \t Disciplina: %s \t Nota: %.2f", aluno->nome,aluno->matricula,aluno->disciplina->nome,aluno->disciplina->nota);       

    free(aluno->disciplina);
    free(aluno);
    
    return 0;
}
