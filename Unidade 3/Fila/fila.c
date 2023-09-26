#include "fila.h"
#include "lista.c"

struct fila{
    Lista* ini;
    Lista* fim;
};

Fila* fila_cria(void){
    Fila* f= (Fila*) malloc (sizeof(Fila));
    f->fim=NULL;
    f->ini=NULL;
    return f;
}

void fila_insere(Fila* f, float v){
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->info = v;
    n->prox = NULL;
    if(f->fim != NULL){
        f->fim->prox = n;
    } else{
        f->ini = n;
    }
    f->fim = n;
}

float fila_retira(Fila* f){
    Lista* t;
    float v;
    if(fila_vazia(f)){
        printf("Fila vazia!\n");
        exit (1);
    }
    t = f->ini;
    v = t->info;
    f->ini = t->prox;
    free(t);
    return v;
}

int fila_vazia(Fila* f){
    return (f->ini == NULL);
}

void fila_imprime(Fila* f){
    lst_imprime(f->ini);
}

void fila_libera(Fila* f){
    lst_libera(f->ini);
    free(f);
}
