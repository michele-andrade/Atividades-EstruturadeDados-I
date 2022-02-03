
#ifndef ponto_h
#define ponto_h

#include <stdio.h>

typedef struct aluno Aluno;

Aluno* aluno_cria(char nome[100], int matricula, double nota[3], int faltas, char conceito);
void aluno_libera(Aluno* A); 
void aluno_acessa(Aluno* p, char *nome[100], int *matricula, double *nota[3], int *faltas, char *conceito);
void aluno_atribui(Aluno* a, char nome[100], int matricula, double nota[3], int faltas, char conceito);
void aluno_media(Aluno *a);

#endif
