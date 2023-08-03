#include<stdio.h>
#include<Stdlib.h>

/* Uma Struct Aluno que armazena os seguintes dados */
typedef struct aluno{
    int mat;
    char nome[81];
    char end[121];
    char tel[21];
}Aluno;

#define MAX 100
Aluno* tab[MAX];

/* Funçao que inicializa o Vetor tab*/
void inicializa (int n, Aluno** tab){
    int i;
    for (i=0;i<n;i++)
        tab[i]=NULL;
}
/* Funçao responçavel para preencher os dados da struct no vetor de ponteiro e fazer a alocaçao dinamica */
void preenche (int n, Aluno** tab, int i){
    if (i<0||i>=n){
        printf("Indice fora do limite do vetor.\n");
        exit(1);
    }
    if (tab[i]==NULL)
        tab[i]=(Aluno*) malloc(sizeof(Aluno));
    
    printf("Entre com a Matricula: ");
    scanf("%d", &tab[i]->mat);
    printf("Entre com o nome: ");
    scanf(" %80[^\n]", tab[i]->nome);
    printf("Entre com o endereco: ");
    scanf(" %120[^\n]", tab[i]->end);
    printf("Entre com o telefone: ");
    scanf(" %20[^\n]", tab[i]->tel);
}

/*Funçao responçavel para liberar a memoria alocada*/
void retira (int n, Aluno** tab, int i){
    if (i<0||i>=n){
        printf("Indice fora do limite do vetor.\n");
        exit(1);
    }
    if (tab[i]!=NULL){
        free(tab[i]);
        tab[i]=NULL;
    }
}

/*Funçao responçavel para imprimir os ponteiros*/
void imprime (int n, Aluno** tab, int i){
    if (i<0||i>=n){
        printf("Indice fora do limite do vetor.\n");
        exit(1);
    }
    if (tab[i]!=NULL){
        printf("Matricula: %d\n", tab[i]->mat);
        printf("Nome: %s\n", tab[i]->nome);
        printf("Endereco: %s\n", tab[i]->end);
        printf("Telefone: %s\n", tab[i]->tel);
    }
}

/*Funçao responçavel para imprimir os vetores dos ponteiros*/
void imprime_tudo (int n, Aluno** tab){
    int i;
    for(i=0;i<n;i++)
        imprime(n, tab, i);
}

int main (void){
    Aluno* tab[10];
    inicializa(10, tab);
    preenche(10, tab, 0);
    preenche(10, tab, 1);
    preenche(10, tab, 2);
    imprime_tudo(10, tab);
    retira(10, tab, 0);
    retira(10, tab, 1);
    retira(10, tab, 2);

    return 0;
}
