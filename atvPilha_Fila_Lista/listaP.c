#include <stdio.h>
#include <stdlib.h>
#include "listaP.h"

void Lista_Inicia(Lista *pLista){
    pLista->prim = NULL;
}

int Lista_EhVazia(Lista* pLista){
    if (pLista == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void Lista_Insere(Lista* pLista, int posicao, int item){

    ListaNo* novoNo = (ListaNo*)malloc(sizeof(ListaNo));
    novoNo->info = item;
    
    if(posicao == 0){//caso a posição seja 1 insere no inicio da lista
        //printf("entrei no metodo de inserir na primeira posicao\n");
        if(pLista->prim == NULL){
            //printf("primeiro era nulo\n");
            novoNo->prox = NULL;
        }
        else{
            //printf("não era nulo \n");
            novoNo->prox = pLista->prim;
        }
        //printf("setei o proximo do novo no\n");
        pLista->prim = novoNo;
        //printf("inserido\n");
    }
    else{//confere se a posição digitada é valida
        //printf("entrei no metodo de inserir nas outras posicoes\n");
        int tam = Lista_Tamanho(pLista);
        ListaNo *no, *aux;
        
        int cont = 0;
        no = pLista->prim;

        do
        {
            aux = no;
            no = no->prox;
            cont++;

            if (cont == tam){
                break;
            }
        } while (cont < posicao);

        aux->prox = novoNo;
        novoNo->prox = no;
    }

}
void lst_imprime(Lista* pLista){
    for(ListaNo* pNo = pLista->prim; pNo != NULL; pNo = pNo->prox){
        printf("Número: %d\n", pNo->info);
    }
}



int Lista_Remove(Lista* pLista, int *item, int posicao){
    if(pLista == NULL){
        return 0;
    }
    else {
        ListaNo* noAnterior = NULL;
        ListaNo* no = pLista->prim;
        int cont = 0;
        while(no != NULL && cont < posicao){
            noAnterior = no;
            no = no->prox;
            cont++;
        }
        if(no != NULL){
            if(noAnterior == NULL){
                pLista->prim = no->prox;
            }
            else{
                noAnterior->prox = no->prox;
            }
            *item = no->info;
            free(no);
            return 1;
        }
    }
    return 0;
}

int Lista_Tamanho(Lista *pLista){
    int contador = 0;
    if (Lista_EhVazia(pLista) == 1){
        return 0;
    }
    else {
        ListaNo *p;
        for (p = pLista->prim; p != NULL; p = p->prox){
            contador++;
        }
        return contador;
    } 
}

void Lista_Libera(Lista **pLista){
  ListaNo *pNo = (*pLista)->prim;

  while (pNo != NULL)
  {
    ListaNo *auxNo = pNo->prox;
    free(pNo);
    pNo = auxNo;
  }

  free(*pLista);
  *pLista = NULL;
}