#include <stdio.h>
#include <stdlib.h>
#include "vetor_util.h"

int main(){
	//questao 1
	//tamanho do vetor
	int tamanhoq1;    	
	printf("QUESTÃO 1\n");
	printf("Digite o  tamanho do vetor: ");
    	scanf("%d", &tamanhoq1);
    	
	int vetorq1[tamanhoq1];
    	// criando o vetor
    	for (int i = 0; i < tamanhoq1; i++){
        	printf("Digite um numero:");
        	scanf("%d", &vetorq1[i]);
    	}
    	int elementoq1;
    	printf("Digite o elemento a ser procurado: ");
    	scanf("%d", &elementoq1);
    	
    	//chamando a função de busca 
    	int resultadoq1 = buscaSequencial(vetorq1, tamanhoq1, elementoq1);
    	

        printf("%d\n", resultadoq1);
        
        //questao 2
        
	printf("\nQUESTÃO 2\n");
	//tamanho do vetor
	int nq2;
	printf("Digite o  tamanho do vetor: ");
    	scanf("%d", &nq2);
    	
	int vetorq2[nq2];
    	// criando o vetor
    	for (int i = 0; i < nq2; i++){
        	printf("Digite um numero:");
        	scanf("%d", &vetorq2[i]);
    	}
    	int elementoq2;
    	printf("Digite o elemento a ser procurado: ");
    	scanf("%d", &elementoq2);
    	
    	//chamando a função de busca 
    	int resultadoq2 = buscaBinaria(vetorq2, nq2, elementoq2);
    	

        printf("%d\n", resultadoq2);
        
        //questao 3
	printf("\nQUESTÃO 3\n");
	//teste 1
	//tamanho do vetor
	int n1;
	printf("Digite o  tamanho do vetor: ");
    	scanf("%d", &n1);
    	
	int vetor1[n1];
    	// criando o vetor
    	for (int i = 0; i < n1; i++){
        	printf("Digite um numero:");
        	scanf("%d", &vetor1[i]);
    	}
    	int n2;
	printf("Digite o  tamanho do vetor: ");
    	scanf("%d", &n2);
    	
	int vetor2[n2];
    	// criando o vetor
    	for (int i = 0; i < n2; i++){
        	printf("Digite um numero:");
        	scanf("%d", &vetor2[i]);
    	}
    	//chamando a função
    	int *result = intercalaVetoresOrdenados (vetor1, n1, vetor2, n2);
	for(int i = 0; i < (n1 + n2); i++){
        	printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
        
        //questao 4
        
	printf("\nQUESTÃO 4\n");
	//teste 1
	//teste 
	//tamanho do vetor
	int tamvet1q4;
	printf("Digite o  tamanho do vetor: ");
    	scanf("%d", &tamvet1q4);
    	
	int vetor1q4[tamvet1q4];
    	// criando o vetor
    	for (int i = 0; i < tamvet1q4; i++){
        	printf("Digite um numero:");
        	scanf("%d", &vetor1q4[i]);
    	}
    	int tamvet2q4;
	printf("Digite o  tamanho do vetor: ");
    	scanf("%d", &tamvet2q4);
    	
	int vetor2q4[tamvet2q4];
    	// criando o vetor
    	for (int i = 0; i < tamvet2q4; i++){
        	printf("Digite um numero:");
        	scanf("%d", &vetor2q4[i]);
        }
        //chamando a função
    	int rq4 = comparaVetores(vetor1q4, vetor2q4, tamvet1q4, tamvet2q4);
    	printf("%d\n", rq4); 
	
        
        
    return 0; 
}
