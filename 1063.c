#include <stdio.h>
#include <stdlib.h>

struct PILHA{
    char stack[1001];
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

/***
 * Pra essa, tive que entender verdadeiramente toda a lógica da anterior, pois a situação muda
 * se temos duas sequências de dados ao invés de uma só
 ***/

int main(){
    int quantidade;
    int i,z,j,k;
    pilha pil;
    pil = (pilha)malloc(sizeof(struct PILHA));
    char palavra[1001], palavraFinal[1001];
    while(scanf("%d",&quantidade) != EOF){
        if(quantidade == 0) return 0;
        pil->topo = 0;
        j = 0;
        k = 0;
        for(i=0;i<quantidade;i++){
            scanf(" %c",&palavra[i]);
        }
        palavra[i] = '\0';
        for(z=0;z<quantidade;z++){
            scanf(" %c",&palavraFinal[z]);
        }
        palavraFinal[z] = '\0';
        while(1){
            if(!isEmpty(pil) && stacktop(pil) == palavraFinal[k]){
                pop(pil);
                printf("R");
                k++;
            }else if(j<quantidade){
                push(pil,palavra[j]);
                printf("I");
                j++;
            }else{
                break;
            }
        }
        if(isEmpty(pil))
            printf("\n");
        else
            printf(" Impossible\n");
    }
    free(pil);
    return 0;
}