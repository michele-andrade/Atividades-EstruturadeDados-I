#include <stdio.h>
#include "comparacao.h"

int comparaVetores(int* nums1, int* nums2, int nums1Tam, int nums2Tam){
	int resultado = 0;
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
