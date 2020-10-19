#include "lista.h"

//nessa o tipo lista eh passado por referencia e os seu valores são iniciados
void cria_lista(Lista *l, int n){
    l->fim = n-1;
    l->pos = -1;
    l->total = 0;
    return;
}

//Se a quantidade de elemento da lista for igual a 0 ela esta vazia;
int lista_vazia(Lista *l){
    if(l->total == 0){
        return 1;
    }
    else{
        return 0;
    }
}

//Se a quantidade de elementos da lista for igual ao ultimo indicie+1 ela esta cheia
int lista_cheia(Lista *l){
    if(l->total == l->fim+1){
        return 1;
    }
    else{
        return 0;
    }
}

//
int insere_lista(Lista *l, char x, char y[]){
    if(lista_cheia(l)){
        return 0; //erro, a lista se encontra cheia
    }
    
    l->total++;// quantidade de elementos eh incrementado
    l->pos++;// posicao eh atualizada
    // onde os valores sao recebidos na funcao
    l->brinquedo[l->pos].numero = x;
    strcpy(l->brinquedo[l->pos].modelo, y);
    return 1;
}

Info remove_lista(Lista *l, int *n, int i){
    int j;
    Info aux = l->brinquedo[i], temp;
    
    /*Essa funcao  realiza o shift das posicoes,levando o elemento para frente e depois
     valor de n eh decrementado e o valor eh excluido da lista*/ 
    for( j=i; j<(*n); j++){
        
        l->brinquedo[j] = l->brinquedo[j+1];
    }
    //onde o valor do vetor eh decrementado
    *n = (*n-1);
    //returno do valor que foi excluido
    return aux;
}