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

void pilha_push(Pilha* p, int v){
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->info = v;
    n->info = p->prim;
    p->prim = n;
}


int pilha_vazia(Pilha* p){
    return(p->prim == NULL);
}

int pilha_pop(Pilha* p){
    Lista* t;
    int v;
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

void pilha_imprimi(Pilha* p){
    lst_imprime(p->prim);
}
