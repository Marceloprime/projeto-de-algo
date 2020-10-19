#include "pilha.h"

//Eh passado um valor para a funcao, esse valor eh definido como a capacidade da pilha, e o topo eh iniciado;
void cria_pilha(Pilha *p, int tamanho){
    p->topo =-1;
    p->capacidade=tamanho;
    return;
}

//Essa funcao verificar se o topo eh igual a -1, caso seja a pilha esta varzia;
int pilha_vazia(Pilha p){
    if((p.topo == -1)){
        return 1;
    }
    else{
        return 0;
    }
}

//Essa funcao verificar se o valor do topo(ultima posicao da pilha) +1 eh igual a capacidade, se verdade
//ela esta cheia ne nao retorna 0;
int pilha_cheia(Pilha p){
        if(p.topo+1 == p.capacidade){
        return 1;
    }
    else{
        return 0;
    }
}

// Funcao de insere na pilha caso ela esta cheia, ela realiza a insercao
int push(Pilha *p, Info2 elem){
    if(pilha_cheia(*p)){
        return 1; //erro de insercao
    }
    //insercao
    p->topo++;
    p->brinquedo[p->topo].numero = elem.numero;
    strcpy(p->brinquedo[p->topo].modelo, elem.modelo);
    return 0;
}

//Essa Funcao remover um elemento da pilha, porem antes disso o valor da pilha e salvo em variavel
//aux que eh passada por referencia;
int pop(Pilha *p, Info2 *aux){
    if(pilha_vazia(*p)){
        return 1; //erro de remocao
    }    
    
    //Procedimento em que o valor removido eh guardado no aux;
    aux->numero = p->brinquedo[p->topo].numero;
    strcpy(aux->modelo, p->brinquedo[p->topo].modelo);
    
    //remocao
    p->topo--;
    
    return 0;
}

//Funcao de impressao 
void imprime_pilha(Pilha p, int n_caixa){
    printf("Caixa %d: brinquedo <%c,%s> - quantidade %d\n", n_caixa, p.brinquedo[p.topo].numero, p.brinquedo[p.topo].modelo, p.topo+1);
    return;
}   

//Essa Funcao esvazia_pilha para que ela possa ser preechiada novamente;
void esvazia_pilha(Pilha *p){
    p->topo=-1;
    return;
}
