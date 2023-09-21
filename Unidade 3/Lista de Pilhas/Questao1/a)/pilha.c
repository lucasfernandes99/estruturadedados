#include "pilha.h"


struct pilha{
    float* t;
    int n; /*Tamanho da pilha*/
    int c; /*Capacidade maxima*/
};

Pilha* pilha_cria(int c){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->t = (float*) malloc(c * sizeof(float));
    p->n = 0; /* inicializa com zero elementos*/
    p->c = c;
    return p;
}

void pilha_push(Pilha* p, float v){
    if(p->n == p->c){ /*Realoca o vetor dobrando a capacidade */
        p-> c *= 2;
        p-> t = (float*) realloc(p->t, p->c * sizeof(float));
    }
    /* insere elemento na proxima posiçao livre */
    p->t[p->n++] = v;
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
    v = p->t[--p->n];
    return v;
}

void pilha_libera(Pilha* p){
    free(p->t);
    free(p);
}
