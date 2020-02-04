#include <stdlib.h>
#include <stdio.h>
///////////////////////////
/// Implementação da Heap
///////////////////////////
void insertionSort(int *array, int size){

    int i, j, aux;

    for(i = 1; i < size; i++){ //percorre todo o vetor
        aux = array[i]; //atribui com o valor referente ao indice atual
        j = i - 1; //joga vai receber o indice anterior 

        while(j >= 0 && array[j] > aux){ //enquanto o indice j for maior ou igual a 0 e o valor dessa posicao for maior que auxiliar
            array[j+1] = array[j]; //esse laco copia todas as posições que são maiores que a posicao atual e insere na posição certa
            j = j - 1;
        }
        array[j + 1] = aux; //insereve o valor atual na posicao correta
    }
}

void insereHeap(int *hip, int tam, int item){
    tam = tam+1;
    hip[tam] = item;
    insertionSort(hip,tam+1);
}

int removeHeap(int *hip, int tam){
    int aux = hip[tam];
    return aux;
}

///////////////////////////
/// Implementação da Pilha
///////////////////////////

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
///////////////////////////
/// Implementação da Fila
///////////////////////////
struct Fila{
    int inicio;
    int fim;
    int valores[1000];
};
typedef struct Fila* fila;

fila initFila(){
    fila fil = (fila)malloc(sizeof(struct Fila));
    fil->inicio = 1;
    fil->fim = 0;
    return fil;
}

fila insertFila(fila fil, int item){
    fil->fim = fil->fim + 1;
    fil->valores[fil->fim] = item;
    return fil;
}

int removeFila(fila fil){
    int aux = fil->valores[fil->inicio];
    fil->inicio = fil->inicio+1;
    return aux;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    int i, vezes = 0, operador = 0, valor = 0;
    int r1,r2,r3;
    int pilha[1000];
    int hip[1000];
    while(scanf("%d",&vezes)!=EOF){
        // Resetando os valores das estruturas de dados e das respostas
        r1 = 1;
        r2 = 1;
        r3 = 1;
        pilha[0] = 0;
        fila Fila = initFila();
        hip[0] = 0;
        int tamanhoHip = 0;
        for(i=0;i<vezes;i++){
            scanf("%d %d",&operador,&valor);
            if(operador == 1){
                push(pilha, valor);
                Fila = insertFila(Fila, valor);
                insereHeap(hip,tamanhoHip,valor);
                tamanhoHip++;
            }else if(operador == 2){
                // r == 0 significa que não pode ser essa estrutura, FALSE
                if(pop(pilha)!=valor){
                    r1 = 0;   
                }
                if(removeFila(Fila)!=valor){
                    r2 = 0;
                }
                if(removeHeap(hip,tamanhoHip)!=valor){
                    r3 = 0;
                }
                tamanhoHip--;
            }
        }
        if(r1 && r2)
            printf("not sure\n");
        else if(r1 && r3)
            printf("not sure\n");
        else if(r2 && r3)
            printf("not sure\n");
        else if(r1)
            printf("stack\n");
        else if(r2)
            printf("queue\n");
        else if(r3)
            printf("priority queue\n");
        else
            printf("impossible\n");
        
        free(Fila);
        for(i=0;i<1000;i++)
            pilha[i] = 0;
        for(i=0;i<1000;i++)
           hip[i] = 0;
    }
    return 0;
}