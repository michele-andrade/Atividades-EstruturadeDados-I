#include <stdio.h>
#include "BuscaSeq.h"

int main(){
	//tamanho do vetor
	int n;
	printf("Digite o  tamanho do vetor: ");
    	scanf("%d", &n);
    	
	int vetor[n];
    	// criando o vetor
    	for (int i = 0; i < n; i++){
        	printf("Digite um numero:");
        	scanf("%d", &vetor[i]);
    	}
    	int elemento;
    	printf("Digite o elemento a ser procurado: ");
    	scanf("%d", &elemento);
    	
    	//chamando a função de busca 
    	int resultado = buscaSequencial (vetor, n, elemento);

        printf("%d\n", resultado);
    return 0; 
}
