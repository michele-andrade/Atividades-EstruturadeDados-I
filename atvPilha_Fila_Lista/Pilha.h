#include "listaP.h"

#ifndef pilha_h
#define pilha_h


typedef struct pilha Pilha;
struct pilha{
    Lista* lista;
    int tam;
};

void Pilha_Inicia(Pilha *pPilha);

int Pilha_EhVazia(Pilha* pPilha);
void Pilha_Push(Pilha* pPilha, int x);
int Pilha_Pop(Pilha* pPilha, int *pX);
int Pilha_Tamanho(Pilha *pPilha);
void imprime_Pilha(Pilha *pPilha);
void Pilha_Libera(Pilha **pPilha);

#endif 