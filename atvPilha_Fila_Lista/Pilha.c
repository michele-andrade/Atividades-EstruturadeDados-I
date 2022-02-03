#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

void Pilha_Inicia(Pilha *pPilha){
    pPilha->lista = (Lista*) malloc(sizeof(Lista));
    Lista_Inicia(pPilha->lista);
    pPilha->tam = 0;
}

int Pilha_EhVazia(Pilha* pPilha){
    return Lista_EhVazia(pPilha->lista);
}

void Pilha_Push(Pilha* pPilha, int x){
    int posicao = Pilha_Tamanho(pPilha);
    //printf("inserindo na lista\n");
    
    Lista_Insere(pPilha->lista, posicao, x);
    //printf("feita a inserçao \n");
    pPilha->tam++;
}

int Pilha_Pop(Pilha* pPilha, int *pX){
    int posicao = Pilha_Tamanho(pPilha);
    int resultado = Lista_Remove(pPilha->lista, pX, posicao-1);
    pPilha->tam--;
    if (resultado == 0){
        return 0;
    }
    else{
        return 1;
    }  
}

int Pilha_Tamanho(Pilha *pPilha){
    return pPilha->tam;
}
void imprime_Pilha(Pilha *pPilha){
    lst_imprime(pPilha->lista);
}

void Pilha_Libera(Pilha **pPilha){
  Lista_Libera(&(*pPilha)->lista);
  free(*pPilha);
  *pPilha = NULL;
}