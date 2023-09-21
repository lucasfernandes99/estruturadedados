typedef struct pilha Pilha;

/* Cria a Pilha*/
Pilha* pilha_cria(void);

/* Funçao para inserir novo elemento na pilha*/
void pilha_push(Pilha* p, float v);

/* Funçao para remover elemento da pilha*/
float pilha_pop(Pilha* p);

/* Funçao para verificar se a pilha esta vazia*/
int pilha_vazia(Pilha* p);

/* Funçao para liberar memoria alocada na pilha*/
void pilha_libera(Pilha* p);

float topo(Pilha* p);
void pilha_imprimi(Pilha* p);