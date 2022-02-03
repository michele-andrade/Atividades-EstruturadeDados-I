#include <stdio.h>
#include "comparacao.h"
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
    	int r = comparaVetores(vetor1, vetor2, n1, n2);
    	printf("%d\n", r);      	
        	
  	
        	
	//teste 1
	//tamanho e declaração dos vetores
	int nums1Tam = 4;
	int nums2Tam = 3;
    	
	int nums1 [4] = {1, 3, 5, 7};
	int nums2 [3] = {1, 3, 5};

    	//chamando a função
    	int resultado = comparaVetores(nums1, nums2, nums1Tam, nums2Tam);
    	printf("%d\n", resultado);

        
        //teste 2
        //tamanho e declaração dos vetores
        int tam1teste2 = 0;
	int tam2teste2 = 0;
    	
	int vetor1teste2 [] = {};
	int vetor2teste2 [] = {};

    	//chamando a função
    	int resultadoteste2 = comparaVetores(vetor1teste2, vetor2teste2, tam1teste2, tam2teste2);
    	printf("\nTeste 2\n");
    	printf("%d\n", resultadoteste2);
    	
    	//teste 3
        //tamanho e declaração dos vetores
        int tam1teste3 = 4;
	int tam2teste3 = 4;
    	
	int vetor1teste3 [4] = {1, 3, 5, 6};
	int vetor2teste3 [4] = {1, 2, 3, 4};

    	//chamando a função
    	int resultadoteste3= comparaVetores(vetor1teste3, vetor2teste3, tam1teste3, tam2teste3);
    	printf("\nTeste 3\n");
    	printf("%d\n", resultadoteste3);
    	
    	//teste 4
        //tamanho e declaração dos vetores
        int tam1teste4 = 4;
	int tam2teste4 = 4;
    	
	int vetor1teste4 [4] = {1, 3, 5, 6};
	int vetor2teste4 [4] = {1, 3, 5, 6};

    	//chamando a função
    	int resultadoteste4= comparaVetores(vetor1teste4, vetor2teste4, tam1teste4, tam2teste4);
    	printf("\nTeste 4\n");
    	printf("%d\n", resultadoteste4);
    	
    return 0; 
}
