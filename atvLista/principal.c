#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define MAXTAM 1000

int main(){

    //criar lista
    Lista* lista = lst_cria();

    int codigo;

    do{
        printf("DIGITE O CÓDIGO: ");
        scanf("%d", &codigo);
        if(codigo == 2){
            int numero;
            printf("Número a ser adicionado: \n");
            scanf("%d", &numero);
            lst_insere_ordenado(lista, numero);
        }
        else if(codigo == 3){
            int numero;
            printf("Número a ser removido: \n");
            scanf("%d", &numero);
            lst_retira(lista, numero);
        }
        else if(codigo == 4){
            int numero;
            printf("Número a ser procurado: \n");
            scanf("%d", &numero);
            int pertence = lst_pertence(lista, numero);
            if (pertence == 1){
                printf("O NÚMERO PERTENCE A LISTA! \n");
            }
            else{
                printf("O NÚMERO NÃO PERTENCE A LISTA!\n");
            }
        }
        else if(codigo == 5){
            lst_imprime(lista);
        }
        else if(codigo == 6){
            lst_liberar(lista);
        }
    } while(codigo != -1);
    
    
    return 0;
}