
#include "arquivo.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char nome1 [20] = "Lista1";
    char extensao[3] = "pdf";
    int tamanho = 2;

    
    Arquivo* a1 = arq_cria(nome1, extensao, tamanho);

    
    arq_imprime(a1);
    
    arq_libera(&a1);
    printf("\n endereco do ponto depois da liberação de memoria %p \n", a1);
    
    return 0;
}
