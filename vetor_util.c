#include <stdio.h>
#include <stdlib.h>
#include "vetor_util.h"

int buscaSequencial(int *vetor, int n, int elemento) {
    int resultado = -1;
    int i;
    for (i = 0; i < n; i++){
        if (vetor[i] == elemento){
		resultado = i;
		break;
        }        
    }
    return resultado; 
}


int buscaBinaria(int *vetor, int n, int elemento){
	int inicio = 0;
	int final = n - 1;
	int encontrado = -1;
	int meio;
	while (inicio <= final){
		meio = (inicio + final)/2;
		if (vetor[meio] == elemento){
			encontrado = meio;
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


int* intercalaVetoresOrdenados(int* nums1, int nums1Tam, int* nums2, int nums2Tam){
	//alocando memoria para o novo vetor 
	int tamanho = nums1Tam + nums2Tam;
	int *vetor = malloc(tamanho * sizeof(int));
	//criando novo vetor 
	int i, j, k;
	i = 0;
	j = 0;
	k = 0;
	while (i < nums1Tam && j < nums2Tam){
		if(nums1[i] < nums2[j]){
			vetor[k]= nums1[i];
			i++;
		} 
		else {
			vetor[k] = nums2[j];
			j++;
		}
		k++;
	}
	//copiar o resto do vetor que possui tamanho maior
	for (int aux = i; aux < nums1Tam; aux++){
		vetor[k] = nums1[aux];
		k++;
	}
	for (int aux = j; aux < nums2Tam; aux++){
		vetor[k] = nums2[aux];
		k++;
	}
	return vetor;
}



int comparaVetores(int* nums1, int* nums2, int nums1Tam, int nums2Tam){
	int resultado;
	if (nums1Tam != nums2Tam){
		resultado = 0;
	}
	else if(nums1Tam == 0 && nums2Tam == 0){
		resultado = 1;
	}
	else{
		for(int i = 0; i < nums1Tam; i++){
			if (nums1[i] != nums2[i]){
				resultado = 0;
				break;
			}
			resultado = 1;
			}
	}
	return resultado;

}
