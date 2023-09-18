#include "pilha.h"
#define N 50 /*numero maximo de elementos*/

struct pilha{
    int n;
    float vet[N];
};

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0; /* inicializa com zero elementos*/
    return p;
}

void pilha_push(Pilha* p, float v){
    if(p->n == N){ /*capacidade esgotada */
        printf("Capacidade da pilha estourou\n");
        exit(1);
    }
    /* insere elemento na proxima posiçao livre */
    p->vet[p->n] = v;
    p->n++;
}

int pilha_vazia(Pilha* p){
    return (p->n == 0);
}

float pilha_pop(Pilha* p){
    float v;
    if (pilha_vazia(p)){
        printf("Pilha vazia\n");
        exit(1); /*aborta programa*/
    }
    /* retira elemento do topo*/
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

void pilha_libera(Pilha* p){
    free(p);
}

void pilha_imprimi(Pilha* p){
    int i;
    float v;
    for (i=p->n-1;i>=0;i--){
        printf("%.1f\n",v = p->vet[i]);
    }
}