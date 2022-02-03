#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int executaSoma(Pilha *pPilha){
    int valor1 = 0;
    int valor2 = 0;
    Pilha_Pop(pPilha, &valor1);
    Pilha_Pop(pPilha, &valor2);

    int soma = valor2 + valor1;

    return soma;
}
int executaSub(Pilha *pPilha){
    int valor1 = 0;
    int valor2 = 0;
    Pilha_Pop(pPilha, &valor1);
    Pilha_Pop(pPilha, &valor2);

    int sub = valor2 - valor1;

    return sub;
}
int executaDivi(Pilha *pPilha){
    int valor1 = 0;
    int valor2 = 0;
    Pilha_Pop(pPilha, &valor1);
    Pilha_Pop(pPilha, &valor2);

    if (valor1 != 0){
        int div = valor2 / valor1;
        return div;
    }
    else{
        printf("Divisão por 0 não pode ser realizada\n");
    }
    return 0;
}
int executaMultip(Pilha *pPilha){
    int multip=1;
    for(int i=0; i<=Pilha_Tamanho(pPilha); i++){
        int valor = 0;
        Pilha_Pop(pPilha, &valor);
        multip = multip*valor;
    }
    return multip;
}
 
int main(){

    //criar pilha dos operandos 
    Pilha *op = malloc(sizeof(Pilha)); 

    Pilha_Inicia(op);
    //criar pilha dos resultados das operações 
    Pilha *r = malloc(sizeof(Pilha)); 

    Pilha_Inicia(r);

    char entrada;
    int operando;
    printf("Digite os números e operadores\n");
    do{
        entrada = getchar();
        if((int)entrada>=48 && (int)entrada<=57){
            operando=(int)entrada-48;
            if(Pilha_Tamanho(op) < 2){
                Pilha_Push(op, operando);
            }
            else if(Pilha_Tamanho(op)>1) {
                printf("entrada inconsistente! \n");
                exit(0);
            } 
        }
        if (entrada == '+' && Pilha_Tamanho(op) == 2){
            int soma = executaSoma(op);
            Pilha_Push(r, soma);
        }
        else if (entrada == '-' && Pilha_Tamanho(op) == 2){
            int sub=executaSub(op);
            Pilha_Push(r, sub);
        }
        else if (entrada == '/' && Pilha_Tamanho(op) == 2){
            int divi = executaDivi(op);
            Pilha_Push(r, divi);
        }
        else if(entrada == '*'){
            int multip=executaMultip(r);
            Pilha_Push(r, multip);
        }    
    } while(entrada != '=');

    int resultadoFinal = executaMultip(r);
    printf("%d\n", resultadoFinal);
    Pilha_Libera(&op);
    Pilha_Libera(&r);
    
    
    return 0;
}