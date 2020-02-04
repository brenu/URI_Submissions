#include <stdlib.h>
#include <stdio.h>

struct PILHA{
    char stack[100];
    int topo;
};
typedef struct PILHA* pilha;

int isEmpty(pilha pil){
    if(pil->topo == 0)
        return 1;
    return 0;
}

void push(pilha pil,char elem){
    int endereco = pil->topo;
    pil->stack[endereco] = elem;
    pil->topo++;
}

char pop(pilha pil){
    if(!isEmpty(pil)){
        pil->topo -= 1;
        int endereco = pil->topo;
        return pil->stack[endereco];
    }
}

char stacktop(pilha pil){
    if(!isEmpty(pil)){
        char valor = pop(pil);
        push(pil,valor);
        return valor;
    }
    return 0;
}

int main(){
    char aux;
    pilha pil = (pilha)malloc(sizeof(struct PILHA));
    push(pil,'a');
    aux = pop(pil);
    printf("%c",aux);
    return 0;
}