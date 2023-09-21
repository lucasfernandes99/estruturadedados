#include "lista.c"
#include "pilha.h"

struct pilha
{
    Lista* prim;
};

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void pilha_push(Pilha* p, float v){
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->info = v;
    n->prox = p->prim;
    p->prim = n;
}


int pilha_vazia(Pilha* p){
    return(p->prim == NULL);
}

float pilha_pop(Pilha* p){
    Lista* t;
    float v;
    if (pilha_vazia(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }
    t = p->prim;
    v = t->info;
    p->prim = t->prox;
    free(t);
    return v;
}


void pilha_libera(Pilha* p){
    lst_libera(p->prim);
    free(p);
}

