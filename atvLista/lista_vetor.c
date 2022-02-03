#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define MAXTAM 1000

struct lista{
    int vetor[MAXTAM];
    int n;
};

Lista* lst_cria(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    li->n = 0;
    return li;
}

void lst_imprime(Lista* li){
    int tamanho = li->n;
    for(int i = 0; i <= tamanho; i++){
        printf("Numero: %d\n", li->vetor[i]);
    }
}

int lst_pertence(Lista* li, int numero){
    int tamanho = li->n;
    for(int i = 0; i < tamanho; i++){
        if(li->vetor[i] == numero){
            return 1;
        }
    }
    return 0;
}
void lst_insere_ordenado(Lista* li, int numero){
    int posicao;
    if(li->n == MAXTAM){
        printf("LISTA CHEIA");
        exit(0);
    }
    else if(li->n == 0){
       li->vetor[0] = numero;
       (li->n)++; 
    }
    else{
        (li->n)++;
        for (int i = 0; i < li->n; i++){
            if(li->vetor[i] > numero){
                posicao = i;
                break;
            }
        }
        for(int j = li->n; j > posicao; j--){
            li->vetor[posicao] = numero;
            li->vetor[j] = li->vetor[j - 1];
        }
        
        
    }

}


void lst_retira(Lista* li, int numero){
    int tamanho = li->n;
    int posicao = -1;
    for(int i = 0; i < tamanho; i++){
        if(numero == li->vetor[i]){
            posicao = i;
            break;
        }
    }
    if(posicao == -1){
        printf("ELEMENTO NÃO ENCONTRADO!\n");
    }
    else{
        for(int i = posicao + 1; i < tamanho; i++){
            li->vetor[i - 1] = li->vetor[i];
        }
        (li->n)--; 
    }
    
}


void lst_liberar(Lista* li){
    free(li);
}


