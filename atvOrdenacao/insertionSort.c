/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   */ 
   
#include <stdio.h>


typedef struct {
    int matricula;
    double notaProva;
    double notaTP;
    double notaFinal;
} Aluno;

void insertionSort(Aluno *a, int n){
    int i, j;
    double aux;
    for(i=1; i<n; i++){
        aux=a[i].notaFinal;
        for(j=i-1; j>=0 && aux<a[j].notaFinal; j--){
            a[j+1].notaFinal = a[j].notaFinal;
        }
        a[j+1].notaFinal = aux;
    }
}

void imprime(Aluno *a, int n){
    for(int i=n-1; i>=0; i--){
        printf("%d  %.2lf", a[i].matricula, a[i].notaFinal);
        printf("\n");
    }
}

int main() {
    
    int n, t;
    printf("Digite a qtde de casos:\n");
    scanf("%d", &t);
    printf("\n");

    for(int i=0; i<t; i++){
        printf("digite a quantidade de alunos:\n");
        scanf("%d", &n);
        Aluno a[n];
        for(int j=0; j<n; j++){
            printf("digite matricula, nota prova, nota tp\n");
            scanf("%d", &a[j].matricula);
            scanf("%lf", &a[j].notaProva);
            scanf("%lf", &a[j].notaTP);

            a[j].notaFinal = (a[j].notaProva*0.7) + (a[j].notaTP*0.3);
        }
        insertionSort(a, n);
        imprime(a, n);
        printf("\n");
    }
    return 0;
}