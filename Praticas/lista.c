#include<stdio.h>
#include<stdlib.h>

struct aluno {
 int mat;
 char nome[81];
 float notas[3];
 float media;
};
typedef struct aluno Aluno;

struct turma {
 char id; 
 int vagas;
 Aluno* alunos[MAX_VAGAS];
};
typedef struct turma Turma;

Turma* turmas[MAX_TURMAS];

Turma* cria_turma(char id){
    int i;
    for(i=0;i<2;i++){
    printf("\nDigite o id da turma");
    scanf(" %[^\n]", turmas[i]->id);
    turmas[i]->id=NULL;
    }
    return turmas;
}

void matricula_aluno(Turma* turma, int mat, char* nome){
    printf("\nDigite o id da turma: ");
    scanf(" %[^\n]", turmas[i]->id);
    printf("\nDigite a matricula: ")
    scanf("%d", &turmas[i]->alunos[i].mat);
    printf("\nDigite o nome: ");
    scanf(" %80[^\n]", turmas[i]->alunos[i].nome);


}

void lanca_notas(Turma* turma){

}

void imprime_alunos(Turma* turma){

}

void imprime_turmas(Turma** turmas, int n){

}

Turma* procura_turma(Turma** turmas, int n, char id){

} 
*/
int main(void){
    int escolha;

    printf("Bem-vindo ao Programa de Gerenciamento de Turmas!\n");
    printf("Este programa gerencia as turmas ofertadas, fornecendo as\n");
    printf("funcionalidades de matricula, lancamento de notas e listagem de\n");
    printf("alunos.\n");
    printf("Autor: Ada Lovelace\t Versao: 1.0\n");
    
    
    do{
        printf("\nMENU:\n1 - Criar turma\n2 - Listar turmas\n3 - Matricular aluno\n4 - Lancar notas\n5 - Listar alunos\n6 - Sair\n\n");

        printf("Digite sua opcao: ");
        scanf("%d",&escolha);

        switch (escolha){
        case 1:
            printf("teste");
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            printf("\nObrigado por usar este programa!");
            break;
        default:
            printf("\nOpcao Invalida!\n");
            break;
        }
    } while (escolha!=6);
    
    return 0;
}
