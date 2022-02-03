#ifndef arquivo_h
#define arquivo_h

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct arquivo Arquivo;

Arquivo* arq_cria(char nome[20], char extensao[3], double tamanho);
void arq_libera(Arquivo** a);
void arq_imprime(Arquivo* a);

char *getNome_arquivo(Arquivo *a);
void setNome_arquivo(Arquivo *a, char novo_nome[20]);

char *getExtensao_arquivo(Arquivo *a);
void setExtensao_Arquivo(Arquivo *a, char novo_nome[20]);

double getTamanho_arquivo(Arquivo *a);
void setTamanho_arquivo(Arquivo *a, double novo_tamanho);

#endif 
