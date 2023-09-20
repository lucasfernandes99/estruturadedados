#include "pilha.c"


int main(void){

    Pilha* pilha = pilha_cria();
    pilha_push(pilha, 28);
    pilha_push(pilha, 15);
    pilha_push(pilha, 16);
    pilha_push(pilha, 38);
    pilha_push(pilha, 39);
    int v = pilha_pop(pilha);
    pilha_imprimi(pilha);
    pilha_libera(pilha);


    return 0;
}