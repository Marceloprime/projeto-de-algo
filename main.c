#include "fila.h"

int main(int argc, char *argv[]){
   int n, tam_p, k, n_caixa=1, size, i,cont=0; //n_caixa: contador
    Lista l;
    Pilha p;
    //Pilha p_temp;
    Fila f;
    
    int n_serie;
    char modelo[MAX];
    n = *argv[1] - 48;
    tam_p = *argv[2] - 48;
    k = *argv[3] - 48;
    cria_lista(&l, n);
    cria_pilha(&p, tam_p);
    cria_fila(&f);
    
    //argumentos da main
    for(i=4;i<argc;i+=2){
       insere_lista(&l,*argv[i],argv[i+1]);
       cont++;
    }
    
    if(cont!=n){
        printf("Quantidade de dados insuficiente!");
        return 1;
    }
    
    size=n;
    //Esses dois lacos de repeticao transforma o k em um indice que vai remover a posicao especifica do vetor; 
    while(size>0){
        //garante que a posicao 0 vai ser removida sempre que o gap chega no final do vetor;
        i=0;
            while(i<n){
                Info aux = remove_lista(&l, &n, i);
                Info2 elem;
                strcpy(elem.modelo,aux.modelo);
                elem.numero = aux.numero;
               //quando a pilha estive cheia  ele insere na fila e depois vai esvazia a pilha
               if(push(&p, elem)){
               
                    imprime_pilha(p,1);
                    //insere_fila(&f, &p);
                    esvazia_pilha(&p);
                    push(&p, elem);
               }
                //atualiza o indicie
                i+=k-1;
                //caso a soma do gap e do indicie seja maior que size ele sai do laco
                if((i+k)>size){
                    break;
                }
            }
            //e decrementado o gap e o size(para sai do laco)
        size--;
        k--;
    }
    if(!pilha_cheia(p) && !pilha_vazia(p)){
        imprime_pilha(p,n_caixa);
        n_caixa++;
    }
    
    /*Nota:
        Professor nao consegui liga a estrutura de fila a meu codigo,
    porem ele esta funciando, embora nao tenha alcancado por completo os objetivos do projeto
    
    
   /*for(i=f->inicio; i<=(f->fim); i++){
        if(!remove_fila(&f, &p_temp)){
           printf("Erro ao remover caixa!");
            break;
        }
        imprime_pilha(&p_temp, n_caixa);
    }*/

    return 0;
}
