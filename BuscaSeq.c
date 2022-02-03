#include <stdio.h>
#include "BuscaSeq.h"

int buscaSequencial (int *vetor, int n, int elemento) {
    int i;
    int aux = -1;
    for (i = 0; i < n; i++){
        if (vetor[i] == elemento){
            aux = 1;
            break;
        }
    }
    return aux; 
}
