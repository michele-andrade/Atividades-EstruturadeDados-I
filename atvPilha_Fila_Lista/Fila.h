#include "listaP.h"

#ifndef fila_h
#define fila_h


typedef struct fila Fila;
struct fila{
    Lista* inicio;
    Lista* fim;
    int tam;
};

void Fila_Inicia(Fila *pFila);

int Fila_EhVazia(Fila* pFila);
void Fila_Enfileira(Fila* pFila, int x);
int Fila_Desenfileira(Fila* pFila, int *pX);
int Fila_Tamanho(Fila *pFila);
void Fila_Libera(Fila**pFila);

#endif 