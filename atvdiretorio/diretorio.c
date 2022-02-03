
#include "diretorio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct diretorio{
    Arquivo** vArquivo;
    double tamanhototal;
    int qtdearquivos;
    int maxarq;
    char nomeDiretorio[20];
};

Diretorio* diretorio_cria(char nomeDiretorio[20], int maxarq){
    Diretorio* aux = (Diretorio*) malloc(sizeof(Diretorio));
    if(aux==NULL)
    {
        printf("Memoria eh insuficiente\n");
        exit(1);
    }
    strcpy(aux->nomeDiretorio, nomeDiretorio);
    aux->maxarq = maxarq;

    return aux;  
}

void diretorio_libera(Diretorio** d){
    int aux = (*d)->qtdearquivos;
    for (int i = 0; i < aux; i++){
        arq_libera(&(*d)->vArquivo[i]);
    }
    free(*d);

    *d = NULL;
}

void adiciona_arq (Diretorio* d){
    char nomeArq[20];
    char extensaoArq[3];
    double tamanhoArq;
    int aux = d->qtdearquivos;
    if(aux < d->maxarq){
        for(int i = 0; i < aux; i++){
            printf("Digite o nome, a extensão e tamanho do arquivo:\n");
            scanf("%s", nomeArq);
            scanf("%s", extensaoArq);
            scanf("%lf", &tamanhoArq);
            Arquivo* a = arq_cria(nomeArq, extensaoArq, tamanhoArq);
            d->vArquivo[i] = a;
        }
        d->qtdearquivos = aux + 1;
    }
    else{
        printf("\nQuantidade de arquivos excedida\n");
    }

}

void remove_arq(Diretorio *d, char nomeAtual[20]){
    Arquivo **aux = d->vArquivo;
    int aux1 = d->qtdearquivos;
    for(int i = 0; i < aux1; i++){
        if(nomeAtual == aux[i]->nome){
            for(int j = i; j < aux1 - 1; j++){
                aux[i] = aux[i + 1];
            }
            break;
        }
    }
    d->vArquivo = aux;
    d->qtdearquivos = d->qtdearquivos - 1;
}

double calcula_tamanho(Diretorio *d){
    Arquivo **aux = d->vArquivo;
    double soma = 0;
    for (int i = 0; i < d->qtdearquivos; i++){
        double tamanhoArq = aux[i]->tamanho;
        soma = tamanhoArq + soma;
    }
    return soma;
}

char *getNome_diretorio(Diretorio *d){
    return d->nomeDiretorio;
}

void setNome_diretorio(Diretorio *d, char novo_nome[20]){
    strcpy(d->nomeDiretorio, novo_nome);
}

double getTam_diretorio(Diretorio *d){
    return d->tamanhototal;
}

void listarArq_diretorio(Diretorio *d){
    Arquivo **aux = d->vArquivo;
    for(int i = 0; i < d->qtdearquivos; i++){
        printf("%s", aux[i]->nome);
    }
}
void renomearArq_diretorio(Diretorio *d, char nomeatual[20], char novonome[20]){
    Arquivo **aux = d->vArquivo;
    for(int i = 0; i < d->qtdearquivos; i++){
        if(nomeatual == aux[i]->nome){
            strcpy(aux[i]->nome, novonome);
        }
    }
}

void diretorio_imprime(Diretorio* d){
    printf("Nome: %s\n", d->nomeDiretorio);
	printf("tamanho total: %lf\n", d->tamanhototal);
    printf("quantidade de arquivos: %d\n", d->qtdearquivos);
    printf("maximo de arquivos: %d\n", d->maxarq);

    Arquivo **a = d->vArquivo;

    for (int i = 0; i < d->qtdearquivos; i++){
        arq_imprime(a[i]);
    }
}