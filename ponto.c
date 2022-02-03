
#include "ponto.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct ponto{
    float x, y;
    
};

Ponto* pto_cria(float x, float y){
    Ponto* aux = (Ponto*) malloc(sizeof(Ponto));
    if(aux==NULL)
    {
        printf("Memoria eh insuficiente\n");
        exit(1);
    }
    aux->x= x;
    aux->y = y;
    return aux;  
}

void pto_libera(Ponto** p){
    free(*p);
    *p = NULL;
    
}

void pto_acessa(Ponto* p, float *x, float* y){
	*x = p->x;
	*y = p->y;

}

void pto_atribui(Ponto* p, float x, float y){
	p->x = x;
	p->y = y;

}

float pto_distancia(Ponto* p1, Ponto *p2){
	float resultado, auxX, auxY;
	auxX = p2->x - p1->x;
	auxY = p2->x - p1->x;
	resultado = sqrt(auxX*auxX + auxY*auxY);
	return resultado;	
}
void pto_imprime(Ponto* p1){
	printf("Coordenada x: %f\n", p1->x);
	printf("Coordenada y: %f\n", p1->y);
}

