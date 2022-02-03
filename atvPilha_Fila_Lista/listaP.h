#ifndef lista_h
#define lista_h

typedef struct lista Lista;
typedef struct listaNo ListaNo;
struct lista{
    ListaNo* prim;
};
struct listaNo{
    int info;
    ListaNo* prox;
};

void Lista_Inicia(Lista *pLista);
int Lista_EhVazia(Lista* pLista);
void Lista_Insere(Lista* pLista, int posicao, int item);
int Lista_Remove(Lista* pLista, int *item, int posicao);
int Lista_Tamanho(Lista *pLista);
void lst_imprime(Lista* pLista);
void Lista_Libera(Lista **pLista);

#endif /*lista_h*/