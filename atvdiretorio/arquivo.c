#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "arquivo.h"

struct arquivo{
    char nome[20];
    char extensao[3];
    double tamanho;
};

Arquivo* arq_cria(char nome[20], char extensao[3], double tamanho){
    Arquivo* aux = (Arquivo*) malloc(sizeof(Arquivo));
    if(aux==NULL)
    {
        printf("Memoria eh insuficiente\n");
        exit(1);
    }
    strcpy(aux->nome, nome);
    strcpy(aux->extensao, extensao);
    aux->tamanho = tamanho;
    return aux;  
}

void arq_libera(Arquivo** a){
    free(*a);
    *a = NULL;
    
}

void arq_imprime(Arquivo* a){
	printf("Nome: %s\n", a->nome);
	printf("extensao: %s\n", a->extensao);
    printf("tamanho: %lf\n", a->tamanho);
}

char *getNome_arquivo(Arquivo *a){
    return a->nome;
}

void setNome_arquivo(Arquivo *a, char novo_nome[20]){
    strcpy(a->nome, novo_nome);
}

char *getExtensao_arquivo(Arquivo *a){
    return a->extensao;
}

void setExtensao_arquivo(Arquivo *a, char novo_nome[20]){
    strcpy(a->nome, novo_nome);
}
double getTamanho_arquivo(Arquivo *a){
    return a->tamanho;
}

void setTamanho_arquivo(Arquivo *a, double novo_tamanho){
    a->tamanho = novo_tamanho;
}