#include <stdio.h>
#include "BuscaBinaria.h"

int buscaBinaria (int *vetor, int n, int elemento){
	int inicio = 0;
	int final = n - 1;
	int encontrado = -1;
	while (inicio <= final){
		int meio = (inicio + final)/2;
		if (vetor[meio] == elemento){
			encontrado = 1;
			break;
		}
		if (vetor[meio] < elemento){
			inicio = meio + 1;
		}
		else{
			final = meio;
		}	
	}
	return encontrado;
}
