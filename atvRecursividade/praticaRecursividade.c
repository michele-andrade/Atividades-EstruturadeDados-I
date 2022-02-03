#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "praticaRecursividade.h"

int fib(int n, int *contador){
	
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else {
		(*contador) += 2;
		return (fib(n - 1, contador) + fib(n - 2, contador));
	}
	
}

void inverteVetor(int vetor[], int tamanho){
	if (tamanho > 0){
		printf("%d ", vetor[tamanho - 1]);
		inverteVetor(vetor, tamanho - 1);
	}
}
int soma(char *numero){
	int somaNumeros = 0;
	for (int i = 0; i < strlen(numero); i++){
		int a = numero[i] - '0';
		somaNumeros = somaNumeros + a;

	}
	return somaNumeros;
}

int grauNove(char* numero, int *contador){
	int resultadoSoma = soma(numero);
	if (resultadoSoma < 9){
		return 0;
	}
	else if (resultadoSoma == 9) {
		(*contador)++;
		return 1; 
	}
	else{
		(*contador)++;
		int i = 15;
		char novoVet[i];
		sprintf(novoVet, "%d", resultadoSoma);
		return (grauNove(novoVet, contador));
	}
}
int BuscaBinaria(int vetorBusca[], int inicio, int final, int elemento){
	int i = (inicio + final) / 2;
	if(inicio > final){
		return -1;
	}
	else if(vetorBusca[i] == elemento){
		return i;
	}
	else if(vetorBusca[i] > elemento){
		return BuscaBinaria(vetorBusca, inicio, i - 1, elemento);
	}
	else{
		return BuscaBinaria(vetorBusca, i + 1, final, elemento);
	}
}