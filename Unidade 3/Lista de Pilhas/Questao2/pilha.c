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

float topo(Pilha* p){
    if (pilha_vazia(p)){
        printf("Pilha vazia\n");
        exit(1); /*aborta programa*/
    }
    float v;
    v = pilha_pop(p);
    pilha_push(p,v);
    printf("\n%.1f\n",v = p->t[p->n-1]);
    return v;    
}

void pilha_imprimi(Pilha* p){
    int i;
    float v;
    printf("\n");
    for (i=p->n-1;i>=0;i--){
        printf("%.1f\n",v = p->t[i]);
    }
}

void concatena_pilhas(Pilha* p1, Pilha* p2){
    Pilha* aux = pilha_cria(p1->c);
    while (!pilha_vazia(p2)){
        float v;
        v = pilha_pop(p2);
        pilha_push(aux,v);
    }
    while (!pilha_vazia(aux)){
        float v;
        v = pilha_pop(aux);
        pilha_push(p1,v);
    }
    pilha_libera(aux);
    pilha_imprimi(p1);
}
