#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

//estruturas da lista e as funcoes padroes dessa estrura
typedef struct{
    char numero;
    char modelo[100];
}Info;

typedef struct{
    int fim;
    int pos;
    int total;
    Info brinquedo[MAX];
}Lista;

void cria_lista(Lista *l, int n);
int lista_vazia(Lista *l);
//funcao exclusiva da lista estatica sequencial
int lista_cheia(Lista *l);
int insere_lista(Lista *l, char x, char y[]);
Info remove_lista(Lista *l, int *n, int i);