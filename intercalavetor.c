#include <stdio.h>
#include <stdlib.h>
#include "intercalavetor.h"

int* intercalaVetoresOrdenados (int* nums1, int nums1Tam, int* nums2, int nums2Tam){
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
