#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

void executa(Pilha *pPilha){
    int valor1 = 0;
    int valor2 = 0;
    Pilha_Pop(pPilha, &valor1);
    Pilha_Pop(pPilha, &valor2);

    printf("valor1: %d, valor2: %d \n", valor1, valor2);

    int sub = valor2 - valor1;
    printf("sub: %d\n", sub);

    Pilha_Push(pPilha, sub);
}

void test1(){
    Pilha *p = malloc(sizeof(Pilha)); 
    printf("inicializando pilha \n");

    Pilha_Inicia(p);
    printf("pilha inicializada \n");

    Pilha_Push(p, 1);
    Pilha_Push(p, 2);

    imprime_Pilha(p);

    printf("inseriu os dois valores \n");

    executa(p);
    
    int valor1 = 0;

    Pilha_Pop(p, &valor1);
    printf("O resultado é: %d \n", valor1);
    

    if(caractere == 43){
        printf("esta correto!\n");
    }

}

int main()
{
    test1();
    return 0;
}
