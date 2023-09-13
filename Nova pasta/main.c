#include "lista2.c"

int main() {
    Lista2 *lista2 = lst2_cria();

    lista2 = lst2_insere(lista2, 42);
    lista2 = lst2_insere(lista2, 17);
    lista2 = lst2_insere(lista2, 65);
    lista2 = lst2_insere(lista2, 23);

    Lista2 *resultadoBusca = lst2_busca(lista2,65);
    if (resultadoBusca != NULL) {
        printf("Elemento %d encontrado na lista.\n", resultadoBusca->info);
    } else {
        printf("Elemento não encontrado na lista.\n");
    }
	printf("\n");

    lista2 = lst2_retira(lista2, 17);
    

    return 0;
}