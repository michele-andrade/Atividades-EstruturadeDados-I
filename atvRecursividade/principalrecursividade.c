
#include "praticaRecursividade.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int exercicio, valor, tamanho, elemento, tamanhoVet;
    do
    { 
        printf("\nDigite o valor do exercicio\n");
        scanf("%d", &exercicio);

        if(exercicio == 1){
            int n;
            printf("Digite n para o calculo de fibonacci\n");
            scanf("%d", &n);
            int contador = 0;
            int resultado = fib(n, &contador);
            printf("%d %d\n", resultado, contador);

            do{
                printf("Digite valor de entrada: \n");
                scanf("%d", &valor);
                if (valor == -1){
                    printf("Digite n para o calculo de fibonacci\n");
                    scanf("%d", &n);
                    int contador = 0;
                    int resultado = fib(n, &contador);
                    printf("%d %d\n", resultado, contador);
                }
                else if(valor == -100){
                    exit(0);
                }
                else if(valor == -2){
                    break;
                }
            } while (valor != -2);   
        }

        else if(exercicio == 2){
            printf("Digite o tamanho: \n");
            scanf("%d", &tamanho);
            int vetor[tamanho];
            for(int i = 0; i < tamanho; i++){
                scanf("%d", &vetor[i]);
            }
            inverteVetor(vetor, tamanho);
        }
            
        else if(exercicio == 3){
            char *vetorNumero = malloc(40 * sizeof(char));
            printf("digite um numero:\n");
            scanf("%s", vetorNumero);

            int contadorGrau = 0;
            int grau = grauNove(vetorNumero, &contadorGrau);
            if (grau == 0){
                printf("0\n");

            }
            else{
                printf("%d\n", contadorGrau);
            } 

            do
            {
                printf("Digite valor de entrada: \n");
                scanf("%d", &valor);

                if (valor == -1){
                    char *vetorNumero = malloc(40 * sizeof(char));
                    printf("digite um numero:\n");
                    scanf("%s", vetorNumero);

                    int contadorGrau = 0;
                    int grau = grauNove(vetorNumero, &contadorGrau);
                    if (grau == 0){
                        printf("o grau é 0\n");
                    }
                    else{
                        printf("o grau é %d\n", contadorGrau);
                    } 
                }
                else if(valor == -100){
                    exit(0);
                }
                else if(valor == -2){
                    break;
                }
            } while (valor != -2);

            free(vetorNumero);
        }
        
        else if(exercicio == 4){
            printf("Digite o tamanho do vetor: \n");
            scanf("%d", &tamanhoVet);
            int vetorBusca[tamanhoVet];
            for(int i = 0; i < tamanhoVet; i++){
                scanf("%d", &vetorBusca[i]);
            }
            printf("Digite o elemento a ser buscado: \n");
            scanf("%d", &elemento);
            int result = BuscaBinaria(vetorBusca, 0, tamanhoVet - 1, elemento);
            printf("%d\n", result);

            do{
                printf("Digite valor de entrada: \n");
                scanf("%d", &valor);
                if (valor == -1){
                    printf("Digite o tamanho do vetor: \n");
                    scanf("%d", &tamanhoVet);
                    int vetorBusca[tamanhoVet];
                    for(int i = 0; i < tamanhoVet; i++){
                        scanf("%d", &vetorBusca[i]);
                    }   
                    printf("Digite o elemento a ser buscado: \n");
                    scanf("%d", &elemento);
                    int result = BuscaBinaria(vetorBusca, 0, tamanhoVet - 1, elemento);
                    printf("%d\n", result);
                }
                else if(valor == -100){
                    exit(0);
                }
                else if(valor == -2){
                    break;
                }

            } while (valor != -2);   
        }

    } while(exercicio != -100);

    return 0;
}