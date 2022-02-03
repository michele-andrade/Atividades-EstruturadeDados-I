#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "diretorio.h"

int main(){

    char nomeDiretorio[20] = "BCC202";
    int max_arquivos = 10;
    Diretorio* d = diretorio_cria(nomeDiretorio, max_arquivos);

    int comando; 
    printf("Digite o comando:\n");
    scanf("%d", &comando);

    while (comando != 10){
     switch (comando)
     {
     case 2:
         diretorio_libera(&d);
         break;
     case 3:
        printf("\nDigite numero de arquivos a serem adicionados:");
        scanf("%d", &d->qtdearquivos);
        adiciona_arq(d);
        break;
    case 4:
        char nomearq[20];
        printf("Digite o nome do arquivo para ser removido:");
        scanf("%s", nomearq);
        remove_arq(d, nomearq);
        break;
    case 5:
        getTam_diretorio(d);
        break;
    case 6: 
        getNome_diretorio(d);
        break;
    case 7:
        char novonomed[20];
        printf("Digite o novo nome do arquivo:");
        scanf("%s", novonomed);
        setNome_diretorio(d, novonomed);
        break;
    case 8:
        char nomeatual[20];
        printf("Digite o novo nome do arquivo:");
        scanf("%s", nomeatual);
        char novonomea[20];
        printf("Digite o novo nome do arquivo:");
        scanf("%s", novonomea);

        renomearArq_diretorio(d, nomeatual, novonomea);
        break;
    case 9:
        listarArq_diretorio(d);
        break;
     }
    }
    diretorio_imprime(d);

    diretorio_libera(&d);
    
    printf("\n endereco do diretorio depois da liberação de memoria %p \n", d);
    
    return 0;
}