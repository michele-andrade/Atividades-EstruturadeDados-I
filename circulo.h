# ifndef circulo_h
# define circulo_h

# include <stdio.h>
# include "ponto.h"
# define PI 3.14159

typedef struct circulo Circulo;

Circulo *circ_cria(Ponto* centro, float raio);
void circ_libera (Circulo** circ);
float circ_area ( Circulo* circ);
int circ_interior ( Circulo* circ, Ponto* pt);
void circ_imprime(Circulo* circ);

# endif
