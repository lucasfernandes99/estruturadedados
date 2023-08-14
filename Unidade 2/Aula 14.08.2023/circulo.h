/* TAD: Circulo */

/* Dependencia de modulos*/
#include "ponto.h"

/* Tipo exportado */
typedef struct circulo Circulo;

/* Funçoes exportadas */
Circulo* circ_cria (float x, float y, float r);
void circ_libera (Circulo* c);
float circ_area (Circulo* c);
int circ_interior (Circulo* c, Ponto* p);