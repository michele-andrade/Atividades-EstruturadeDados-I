/* MATRICULA: 20.1.4171
   NOME: Michele Soares de Andrade 
   */ 
   
#include <stdio.h>
#include<stdlib.h>

typedef struct {
    int matricula;
    double notaProva;
    double notaTP;
    double notaFinal;
} Aluno;

//prototipos das funções

void Merge(Aluno *a, int esq, int meio, int dir);
void MergeSort(Aluno *a, int n);

void Merge(Aluno *a, int esq, int meio, int dir){
    int i, j, k;
    int tamX=meio-esq+1;
    int tamY=dir-meio;
    Aluno *X=(Aluno*) malloc(tamX*sizeof(Aluno));
    Aluno *Y=(Aluno*) malloc(tamY*sizeof(Aluno));

    for(i=0; i<tamX;i++){
        X[i]= a[i+esq];
    }
    for(i=0; i<tamY; i++){
        Y[i]=a[i+meio+1];
    }
    i=0;
    j=0;
    for(k=esq; k<= dir; k++){
        if(i==tamX){
            a[k]=Y[j++];
        }
        else if(j==tamY){
            a[k]=X[i++];
        }
        else if(X[i].notaFinal<=Y[j].notaFinal){
            a[k]=X[i++];
        }
        else{
            a[k]=Y[j++];
        }
    }
    free(X);
    free(Y);
}

void MergeSort(Aluno *a, int n){
    int esq, dir;
    int x=1;
    while(x<n){
        esq=0;
        while(esq+x < n){
            dir=esq+2 * x;
            if(dir>n){
                dir=n;
            }
            Merge(a, esq, esq+x-1, dir-1);
            esq=esq+2*x;
        }
        x*=2;
    }
}

void imprime(Aluno *a, int n){
    printf("\n");
    for(int i=n-1; i>=0; i--){
        printf("%d  %.2lf", a[i].matricula, a[i].notaFinal);
        printf("\n");
    }
}

int main() {
    
    int n, t;
    scanf("%d", &t);
    printf("\n");

    for(int i=0; i<t; i++){
        scanf("%d", &n);
        Aluno a[n];
        for(int j=0; j<n; j++){
            scanf("%d", &a[j].matricula);
            scanf("%lf", &a[j].notaProva);
            scanf("%lf", &a[j].notaTP);

            a[j].notaFinal = (a[j].notaProva*0.7) + (a[j].notaTP*0.3);
        }
        MergeSort(a, n);
        imprime(a, n);
        printf("\n");
    }
    return 0;
}