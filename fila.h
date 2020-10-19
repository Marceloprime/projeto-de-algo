#include "pilha.h"
#define MAX 1000

//Estruturas da Fila
typedef struct{
    char numero_t;
    char modelo_t[100];
}Pilha_fila;


typedef struct{
    int inicio, fim, total;
}Fila;

void cria_fila(Fila *f);
int fila_vazia(Fila *f);
int fila_cheia(Fila *f);
int insere_fila(Fila *f, Pilha *x);
int remove_fila(Fila *f, Pilha *x);