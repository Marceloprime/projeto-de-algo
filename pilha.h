#include "lista.h"


//Estrutura de pilha
typedef struct{
    char numero;
    char modelo[100];
}Info2;

typedef struct{
    int topo;
    int capacidade;
    Info2 brinquedo[MAX];
}Pilha;


void cria_pilha(Pilha *p, int tamanho);
int pilha_vazia(Pilha p);
int pilha_cheia(Pilha p);
int push(Pilha *p, Info2 elem);
int pop(Pilha *p, Info2 *aux);
void imprime_pilha(Pilha p, int n_caixa);
void esvazia_pilha(Pilha *p);
