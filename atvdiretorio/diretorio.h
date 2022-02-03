#ifndef diretorio_h
#define diretorio_h

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "arquivo.h"

typedef struct diretorio Diretorio;

Diretorio* diretorio_cria(char nome[20], int maxarq);
void diretorio_libera(Diretorio** d);
void adiciona_arq (Diretorio* d);
void remove_arq(Diretorio *d, char nomeAtual[20]);
double calcula_tamanho(Diretorio *d);
char *getNome_diretorio(Diretorio *d);
void setNome_diretorio(Diretorio *d, char novo_nome[20]);
double getTam_diretorio(Diretorio *d);
void listarArq_diretorio(Diretorio *d);
void renomearArq_diretorio(Diretorio *d, char nomeatual[20], char novonome[20]);
void diretorio_imprime(Diretorio* d);

# endif 
