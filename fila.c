#include "fila.h"

//Funcaa cria fila 
void cria_fila(Fila *f){
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;
    return;
}

//Essa funcao se o numero de elementos forem igual a ultima posicao da fila entao ela esta cheia
int fila_cheia(Fila *f){
    if((f->total == f->fim)){
        return 1;
    }
    else{
        return 0;
    }
}

//Se a o total de elementos igual 0, entao ela esta vazia
int fila_vazia(Fila *f){
    if(f->total == 0){
        return 1;
    }
    else{
        return 0;
    }
}

//Funcao de insercao da fila onde a pilha e passada por referencia
/*int insere_fila(Fila *f, Pilha *x){
    if(fila_cheia(f))
        return 1; //erro
    f->caixa[f->fim] = *x;
    f->total++;
    if (f->fim == MAX-1)
        f->fim = 0;
    else
        f->fim++;
    return 0;
}/*


int remove_fila(Fila *f, Pilha *x){
    if(fila_vazia(f))
        return 1; //erro
    *x = f.caixa[f->inicio];
    f->total--;
    if (f->inicio == MAX-1)
        f->inicio = 0;
    else
        f->inicio++;
    
    return 0;
}*/