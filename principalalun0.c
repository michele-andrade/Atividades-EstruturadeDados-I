#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    
    Ponto* p1 = pto_cria(2.0,4.0);
    Ponto* p2 = pto_cria(5.0,9.0);
    
    int qtde;
    printf("Digite a quantidade de alunos:");
    scanf("%d", &qtde);
    
    Aluno* *alunos = malloc(qtde * sizeof(Aluno*));
    
    for(int i = 0; i < qtde; i++){
    	 printf("Digite o nome completo: ");
        fgets(alunos[i].nome, 100, stdin);

        printf("Digite o número de matricula: ");
        scanf("%d", &alunos[i].matricula);
        
        printf("Digite o número de faltas: ");
        scanf("%d", &alunos[i].faltas);
        
        for(int j = 0; j < 3; j++){
            printf("Digite a nota: ");
            scanf("%lf", &alunos[i].nota[j]);
	}
	char resul = aluno_media(alunos);
	alunos[i].conceito = resul;
	aluno_cria(alunos[i].nome, alunos[i].matricula, alunos[i].nota, alunos[i].faltas, alunos[i].conceito);
	
	aluno_acessa(alunos, &alunos[i].nome, &alunos[i].matricula, &alunos[i].nota, &alunos[i].faltas, &alunos[i].conceito);
	aluno_atribui(alunos, alunos[i].nome, alunos[i].matricula, alunos[i].nota, alunos[i].faltas, alunos[i].conceito);        
    }
    
    
    
    return 0;
}
