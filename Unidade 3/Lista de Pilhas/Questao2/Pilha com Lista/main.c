#include "pilha.c"


int main(void){

    Pilha* pilha1 = pilha_cria();
    Pilha* pilha2 = pilha_cria();
    pilha_push(pilha1, 1.0);
    pilha_push(pilha1, 4.5);
    pilha_push(pilha1, 2.1);
    pilha_push(pilha1, 3.9);
    float x = pilha_pop(pilha1);
    pilha_imprimi(pilha1);
    float v = topo(pilha1);
    
    pilha_push(pilha2, 9.8);
    pilha_push(pilha2, 3.1);
    pilha_push(pilha2, 7.2);
    pilha_push(pilha2, 7.9);
    float y = pilha_pop(pilha2);
    pilha_imprimi(pilha2);
    float z = topo(pilha2);
    concatena_pilhas(pilha1,pilha2);
    pilha_libera(pilha1);
    pilha_libera(pilha2);

    return 0;
}