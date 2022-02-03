#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct listaNo ListaNo;

struct lista{
    ListaNo* prim;
};
struct listaNo{
    int info;
    ListaNo* prox;
};


Lista* lst_cria(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    li->prim = NULL;
    return li;
}

void lst_imprime(Lista* li){
    for(ListaNo* pNo = li->prim; pNo != NULL; pNo = pNo->prox){
        printf("Número: %d\n", pNo->info);
    }
}

int lst_pertence(Lista* li, int numero){
    for(ListaNo* no = li->prim; no != NULL; no = no->prox){
        if(no->info == numero){
            return 1;
        }
    }
    return 0;
}
void lst_insere_ordenado(Lista* li, int numero){
    ListaNo* noAnterior = NULL;
    ListaNo* no = li->prim;
    while(no != NULL && no->info < numero){
        noAnterior = no;
        no = no->prox;
    }

    ListaNo* novoNo = (ListaNo*)malloc(sizeof(ListaNo));
    novoNo->info = numero;
    if(noAnterior == NULL){
        novoNo->prox = li->prim;
        li->prim = novoNo;
    }
    else{
        novoNo->prox = noAnterior->prox;
        noAnterior->prox = novoNo;
    }

}


void lst_retira(Lista* li, int numero){
    ListaNo* noAnterior = NULL;
    ListaNo* no = li->prim;
    while(no != NULL && no->info != numero){
        noAnterior = no;
        no = no->prox;
    }
    if(no != NULL){
        if(noAnterior == NULL){
            li->prim = no->prox;
        }
        else{
            noAnterior->prox = no->prox;
        }
        free(no);
    }

}
void lst_liberar(Lista* li){
    ListaNo* no = li->prim;
    while(no != NULL){
        ListaNo* aux = no->prox;
        free(no);
        no = aux;
    }
    free(li);
}
