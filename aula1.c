#include<stdio.h>

typedef struct Aluno{
    int mat;
    char nome[10];
    float media;
}aluno;

int buscaBinaria(aluno v[], int n, int mat){
    int i=0;
    int f = n-1;
    while (i <= f){
        int meio = (i+f)/2;
        if (v[meio].mat == mat){
            return meio;
        }
        else if (v[meio].mat < mat){
            i = meio + 1;
        }
        else {
            f= meio - 1;
        }
    }
    
    return -1;
}

int buscaLinear(aluno v[], int n, int mat){
    int i;
    for (i = 0; i < n; i++){
        if (v[i].mat == mat){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    int i;
    printf("Informe o valor de N:\n");
    scanf("%d",&n);
    aluno v[n];
    for (i=0;i<n;i++){
        printf("Informe os dados:\n");
        scanf("%d %s %f", &v[i].mat, v[i].nome, &v[i].media);
    }
    for (i=0;i<n;i++){
        printf("Aluno %d:\n",i+1);
        printf("Matricula:%d \t Nome:%s \t Media:%.2f\n", v[i].mat, v[i].nome, v[i].media);
    }
    printf("Informe a matricula:\n");
    int mat;
    scanf("%d", &mat);
    int r = buscaBinaria(v,n,mat);
    if (r != -1){
        printf("Aluno encontrado: %s\n", v[r].nome);
    }
    else {
        printf("Sorry. Aluno nao encontrado\n");
    }



    return 0;
}
