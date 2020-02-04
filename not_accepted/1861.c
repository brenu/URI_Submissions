#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct assassino{
    int vezes;
    char nome[11];
};
typedef struct assassino* AS;

int compara(const void *a, const void *b) 
{ 
    printf("%s %s",((struct assassino *)a)->nome,((struct assassino *)b)->nome);
    return strcmp(((struct assassino *)a)->nome, ((struct assassino *)b)->nome);
	/* strcmp functions works exactly as expected from
	comparison function */ 
} 

int main(){
    int i,j, passou = 0, tamAS = 0, tamVT = 0;
    char vitima[11], assassino[11],aux[11];
    AS assassinos[100000];
    AS vitimas[100000];

// Recebendo toda a lista com assassinos e vítimas
    while(scanf("%s %s",assassino,vitima) != EOF){
        vitimas[tamVT] = (AS)malloc(sizeof(struct assassino));
        strcpy(vitimas[tamVT]->nome,vitima);
        tamVT++;
        /***
         * Percorrendo o vetor de assassinos até o tamanho já posto para
         * verificar se aquele não já matou alguém
         ***/
        for(i=0;i<tamAS;i++){
            if(strcmp(assassino,assassinos[i]->nome)==0){
                assassinos[i]->vezes++;
                passou = 1;
                break;
            }
        }
        //Se o assassino nunca matou ninguém antes, alocamos memória
        //E o adicionamos ao vetor
        if(passou==0){
            assassinos[tamAS]=(AS)malloc(sizeof(struct assassino));
            assassinos[tamAS]->vezes = 1;
            strcpy(assassinos[tamAS]->nome,assassino);
            tamAS++;
        }

        // Resetando variável que diz se o assassino já matou antes
        passou = 0;
    }

    // Verificando se um assassino já foi morto
    for(i=0;i<tamAS;i++){
        for(j=0;j<tamVT;j++){
            if(strcmp(assassinos[i]->nome,vitimas[j]->nome)==0){
                assassinos[i]->vezes = -500;
                break;
            }
        }
    }

    qsort(assassinos,tamAS,sizeof(struct assassino),compara);
    /*** Retornando uma lista com todos os assassinos ainda vivos
     *   e quantas vezes eles já mataram
     ***/
    printf("HALL OF MURDERERS\n");
    for(i=0;i<tamAS;i++){
        printf("oi");
        if(assassinos[i]->vezes > 0){
            printf("%s %d\n",assassinos[i]->nome,assassinos[i]->vezes);
        }
    }
    return 0;
}