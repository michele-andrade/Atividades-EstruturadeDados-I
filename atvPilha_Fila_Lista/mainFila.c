#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

void test1(){
    Fila *f; 
    printf("inicializando fila \n");

    Fila_Inicia(f);
    printf("fila inicializada \n");

    printf("Inserindo elementos na fila\n");
    Fila_Enfileira(f, 1);
    Fila_Enfileira(f, 2);
    Fila_Enfileira(f, 3);
    Fila_Enfileira(f, 4);
    printf("Elementos inseridos\n");

    printf("O tamanho é: %d\n", Fila_Tamanho(f));
    printf("\nTirando elemento\n");
    int valor = 0;
    Fila_Desenfileira(f, &valor);
    printf("\nO numero retirado foi: %d\n", valor);

    Fila_Libera(&f);

}

int main()
{
    test1();
    return 0;
}
