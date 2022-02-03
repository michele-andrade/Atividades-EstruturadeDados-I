# include <stdlib.h> 
# include <stdio.h>
# include "circulo.h"

struct circulo {
Ponto* centro ;
	float raio ;
};

Circulo* circ_cria(Ponto* centro, float raio){
	Circulo* circ = (Circulo*) malloc(sizeof(Circulo));
	if(circ == NULL) {
		printf("MEMÓRIA INSUFICIENTE");
		exit(1);
	}
	circ->centro = centro;
	circ->raio = raio;
	return circ;
}

void circ_libera(Circulo** circ){
	free(*circ);
	*circ = NULL;
}

float circ_area(Circulo* circ){
	float r = circ->raio;
	float area = PI * r * r;
	return area;
}

int circ_interior(Circulo* circ, Ponto* pt){
	float i;
	i = pto_distancia(circ->centro, pt);
	if (i < (circ->raio)){
		return 1;
	}
	else {
		return 0;
	}
}

void circ_imprime(Circulo* circ){
	pto_imprime(circ->centro);
	printf("O raio do circulo é: %f\n", circ->raio);

}
