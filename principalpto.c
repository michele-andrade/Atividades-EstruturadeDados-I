

#include <stdio.h>
#include "ponto.h"

int main(){
    
    Ponto* p1 = pto_cria(2.0,4.0);
    Ponto* p2 = pto_cria(5.0,9.0);
    
    float x1, y1, x2, y2;
        
    pto_acessa (p1, &x1, &y1);
    pto_atribui(p1, x1, y1);

    pto_acessa (p2, &x2, &y2);
    pto_atribui(p2, x2, y2);
    
    printf("Coordenadas de P1\n");
    pto_imprime(p1);
    printf("Coordenadas de P2\n");
    pto_imprime(p2);
    
    float distancia = pto_distancia (p1, p2);
    printf("\nA distancia entre os pontos é: %f\n", distancia);
    pto_libera(p1);
    pto_libera(p2);
    
    
    return 0;
}
