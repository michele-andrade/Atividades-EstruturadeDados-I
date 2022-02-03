#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct aluno Aluno {
    char nome[100];
    int matricula;
    double nota[3];
    int faltas;
    char conceito;
};

Aluno* aluno_cria(char nome[100], int matricula, double nota[3], int faltas, char conceito){
    Aluno* aux = (Aluno*) malloc(sizeof(Aluno));
    if(aux==NULL)
    {
        printf("Memoria eh insuficiente\n");
        exit(1);
    }
    aux->nome= nome;
    aux->matricula = matricula;
    aux->nota= nota;
    aux->faltas = faltas;
    aux->conceito = conceito;
    return aux;
}
void aluno_libera(Aluno* a){
	free(a);
}
void aluno_acessa(Aluno* a, char *nome[100], int *matricula, double *nota[3], int *faltas, char *conceito){
	nome* = a->nome;
	matricula* = a->matricula;
	nota* = a->nota;
	faltas* = a->faltas;
	conceito* = a->conceito;
}
void aluno_atribui(Aluno* a, char nome[100], int matricula, double nota[3], int faltas, char conceito){
	a->nome= nome;
   	a->matricula = matricula;
    	a->nota= nota;
    	a->faltas = faltas;
    	a->conceito = conceito;
}
char aluno_media(Aluno *a){
	char conceito;
	double soma = 0;
	double aux;
	for(int i = o; i < 3; i++){
		aux = a->nota[i];
		soma = soma + aux;
	}
	double media = soma / 3;
	if(faltas <= 18){
		if(media < 6.0){
			conceito = 'R';
		}
		elseif(media < 7.5){
			conceito = 'C';
		}
		elseif(media < 9.0){
			conceito = 'B';
		}
		else{
			conceito = 'A';
		}
	}
	else{
		a->conceito = 'F'
	}
	
}




















