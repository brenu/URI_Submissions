#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 101


int isEmpty(int stack[]){
    if(stack[0]==0)
        return 1;
    return 0;
}

void push(int stack[],int elem){
    int endereco = stack[0];
    stack[0] += 1;
    stack[endereco+1] = elem;
}

int pop(int stack[]){
    if(!isEmpty(stack)){
        int endereco = stack[0];
        stack[0] -= 1;
        return stack[endereco];
    }
}

int stacktop(int stack[]){
    if(!isEmpty(stack)){
        int valor = pop(stack);
        push(stack,valor);
        return valor;
    }
    return 0;
}

/** Encontrei parte da solução desse problema sendo implementada em C++, então implementei a pilha e importei
 * para o C **/

int main(){
    int quantidade,i,j, aux, aux2;
    int numeros[1001];
     
    while(1){
        scanf("%d",&quantidade);
        if(quantidade == 0) break;
        while(1){
        j = 1;
        aux = 0;
        aux2 = 0;
        int pilha[1010];
        pilha[0] = 0;
        for(i = 1; i <= quantidade; i++){
            scanf("%d",&numeros[i]);
            if(numeros[i] == 0){
                aux = 1;
                printf("\n");
                break;
            }
        }
        i = 1;
        while(1){
                if(i > quantidade) break;
            if(aux2 == 1) break;
            if(aux == 1) break;
            while(1){
                if(!isEmpty(pilha) && stacktop(pilha) == numeros[i]){
                    pop(pilha);
                    break;
                }else if(j <= quantidade){
                    push(pilha,j);
                    j++;
                    if(stacktop(pilha) == numeros[i]){
                        pop(pilha);
                        break;
                    }
                }else{
                    aux2 = 1;
                    break;
                }
            }
            i++;
            
        }
        if(aux == 1) break;
        if(isEmpty(pilha)) printf("Yes\n");
        else  printf("No\n");
        }
    }
    return 0;
}