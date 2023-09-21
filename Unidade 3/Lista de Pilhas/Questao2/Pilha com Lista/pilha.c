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

float topo(Pilha* p){
    Lista* t;
    t =p->prim;
    float v = t->info;
    printf("\n%.1f\n",v);
    return v;

}

void concatena_pilhas(Pilha * p1, Pilha *p2){
    Lista*aux = NULL;
    while(p2->prim!=NULL){
        Lista* n = (Lista*) malloc(sizeof(Lista));
	    n->info = pilha_pop(p2);
	    n->prox = aux;
        aux= n;
    }
    while(aux!=NULL){
        pilha_push(p1, aux->info);
        aux = aux->prox; 
    }
    pilha_imprimi(p1);
}

void pilha_imprimi(Pilha* p){
    lst_imprime(p->prim);
}