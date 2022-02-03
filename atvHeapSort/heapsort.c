#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *vetor;
    int tamanho;
    int m1;
    int c1;
} Heap;

//prototipos das funções
void heapRefaz(int *v, int esq, int dir,int *m1,int  *c1);
void heapConstroi(int *v, int n,int *m1,int  *c1);
void heapSort(int *v, int n,int *m1,int  *c1);
void imprime(int *v,int x);

void heapRefaz(int *v, int esq, int dir, int *m1, int *c1){
    int i=esq;
    int aux=v[i];
    int j=i*2 + 1; 
    
    while (j <= dir) {
        if (j < dir && v[j] < v[j+1]){
            *c1=*c1+1;
            j++; 
        }
        if (aux >= v[j]){
            *c1=*c1+1;
            break; 
        }
        v[i] = v[j];
        *m1=*m1+1;
        i = j;
        j = i*2 + 1; 
    }
    v[i]=aux;
}

void heapConstroi(int *v, int n, int *m1, int *c1){
    int esq;
    esq = (n/2)-1; 
    while (esq >= 0) {
        heapRefaz(v, esq, n-1, m1, c1);
        esq--;
    }
}

void heapSort(int *v, int n,int  *m1, int *c1) {
    int aux;
    heapConstroi(v, n, m1, c1);
    while (n > 1) {
        aux = v[n-1];
        v[n-1] = v[0];
        *m1=*m1+1;
        v[0] = aux;
        n--;
        heapRefaz(v, 0, n-1, m1, c1);
    }
}

void imprime(int *v,int x) {
  for(int i = 0; i < x; i++){
    printf("%d ",v[i]);
  }
  printf("\n");
}

int main() {
    int t,n;
    scanf("%d",&t);
    Heap *estrutura[t];

    for(int i=0;i<t;i++){
        scanf("%d",&n);
        estrutura[i]->tamanho=n;
        
        estrutura[i] = malloc(t * sizeof (Heap));
        estrutura[i]->vetor=malloc (n * sizeof (int));
        estrutura[i]->m1=0;
        estrutura[i]->c1=0;
        
        for(int j=0;j<n;j++){
            scanf("%d",&estrutura[i]->vetor[j]);
        }
        heapSort(estrutura[i]->vetor,estrutura[i]->tamanho,&estrutura[i]->m1,&estrutura[i]->c1);
    }

    for(int i=0;i<t;i++){
        imprime(estrutura[i]->vetor,estrutura[i]->tamanho);
    }

    printf("Vetor | Comparacoes | Movimentacoes\n");

    for(int i=0;i<t;i++){
        printf("%d..... | %d          | %d\n",i+1,estrutura[i]->c1,estrutura[i]->m1); 
    }

    for(int i=0;i<t;i++){
        free(estrutura[i]);
    }
    return 0;
}