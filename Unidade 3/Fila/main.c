#include "fila.c"

int main(void){
    Fila* fila = fila_cria();
    fila_insere(fila,10);
    fila_insere(fila,20);
    fila_insere(fila,30);
    float x = fila_retira(fila);
    fila_insere(fila,40);
    fila_insere(fila,50);
    float y = fila_retira(fila);
    fila_insere(fila,10);
    fila_insere(fila,60);
    float z = fila_retira(fila);
    fila_imprime(fila);
    fila_libera(fila);

    return 0;

}