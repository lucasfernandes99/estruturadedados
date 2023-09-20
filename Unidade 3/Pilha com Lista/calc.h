/* Arquivo que define a interface da calculadora*/

typedef struct calc Calc;

/* funçoes exportadas*/

Calc* calc_cria (char* f);
void calc_operando(Calc* c, float v);
void calc_operador(Calc* c, char op);
void calc_libera(Calc* c);
