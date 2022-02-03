#include <stdio.h>
#include <stdlib.h>
#include "intercalavetor.h"

int main(){

	//teste
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
        	printf("%d\n", result[i]);
        }
        free(result);

    	//teste 1
	//tamanho e declaração dos vetores
	int nums1Tam = 4;
	int nums2Tam = 4;
    	
	int nums1 [4] = {1, 3, 5, 7};
	int nums2 [4] = {0, 2, 4, 6};

    	//chamando a função
    	int *vetorresultante = intercalaVetoresOrdenados (nums1, nums1Tam, nums2, nums2Tam);
	for(int i = 0; i < (nums1Tam + nums2Tam); i++){
        	printf("%d\n", vetorresultante[i]);
        }
        free(vetorresultante);
        
        //teste 2
        //tamanho e declaração dos vetores
        int tam1teste2 = 0;
	int tam2teste2 = 2;
    	
	int vetor1teste2 [] = {};
	int vetor2teste2 [2] = {1, 2};

    	//chamando a função
    	int *vetorresultantet2 = intercalaVetoresOrdenados (vetor1teste2, tam1teste2, vetor2teste2, tam2teste2);
    	printf("\nTeste 2\n");
	for(int i = 0; i < (tam1teste2 + tam2teste2); i++){
        	printf("%d\n", vetorresultantet2[i]);
        }
        free(vetorresultantet2);
    return 0; 
}
