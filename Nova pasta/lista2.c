#include "lista2.h"

struct lista2{
    int info;
    struct lista2* ant;
    struct lista2* prox;
};

Lista2 *lst2_cria(void)
{
	return NULL;
}
//inserçao no inicio
Lista2* lst2_insere(Lista2* l, int v){
    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info=v;
    novo->prox=l;
    novo->ant=NULL;
    //verifica se a lista nao esta vazia
    if (l!=NULL)
        l->ant=novo;
    return novo;
    
}

Lista2 *lst2_busca(Lista2 *l, int v)
{
	Lista2 *p; // cria o ponteiro auxiliar
	for (p = l; p != NULL; p = p->prox) // verifica cada no da lista ate chegar a um espaço vazio
	{
		if (p->info == v) // verifica se o elemento da lista e igual ao elemento informado
			return p; //caso o elemento seja encontrado retorna o valor do ponteiro
	}
	return NULL; //caso o elemento nao seja encontrado retorna um espaço vazio
}
//retira um elemento da lista
Lista2* lst2_retira(Lista2* l, int v){
    Lista2* p = lst2_busca(l,v);

    if(p==NULL)
        return l; //nao achou elemento

    //retira elemento do encadeamento
    if(l==p) //testa se e o primeiro elemento
        l=p->prox;
    else
        p->ant->prox=p->prox;
    if(p->prox!=NULL) //testa se e o ultimo elemento
        p->prox->ant=p->ant;

    free(p);
    return l;
}
