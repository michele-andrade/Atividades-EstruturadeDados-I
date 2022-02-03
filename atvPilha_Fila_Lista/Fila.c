#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

/*As funções de inserir e remover da TAD lista não foram suficientes para implementar as funções de enfileirar e desenfileirar
 do TAD fila. Para a fila é necessário na função de inserção atualizar ambos os ponteiros, inicio e fim. O qual não foi possivel
 com a função do TAD lista */

void Fila_Inicia(Fila *pFila){
    Fila* f= (Fila*)malloc(sizeof(Fila));
    f->inicio=NULL;
    f->fim=NULL;
    f->tam=0;
}

int Fila_EhVazia(Fila* pFila){
    return Lista_EhVazia(pFila->inicio);
}
void Fila_Enfileira(Fila* pFila, int x){
    //cada novo elemento deve ser inserido no final da lista
    int posicao = Fila_Tamanho(pFila);
    Lista_Insere(pFila->fim, posicao, x);

    pFila->tam++;
}

int Fila_Desenfileira(Fila* pFila, int *pX){
    //deve-se retirar o elemento do inicio da lista
    int resultado = Lista_Remove(pFila->inicio, pX, 0);
    pFila->tam--;
    if (resultado == 0){
        return 0;
    }
    else{
        return 1;
    } 
}
int Fila_Tamanho(Fila *pFila){
    return pFila->tam;
}


void Fila_Libera(Fila**pFila){
  Lista_Libera(&(*pFila)->inicio);
  Lista_Libera(&(*pFila)->fim);
  free(*pFila);
  *pFila = NULL;
}