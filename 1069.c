#include <stdlib.h>
#include <stdio.h>

void removePontos(char *str, int pos){
    int aux;
    for(aux=pos;str[aux]!='\0';aux++){
        str[aux] = str[aux+1];
    }
}

void removeDiamante(char *str, int pos){
    int k, contador = 0;

    while(contador<2){
        for(k=pos;str[k]!='\0';k++){
            str[k] = str[k+1];
        }
        contador++;
    }
}

int main(){
    int casos, i,diamantes = 0;
    char entrada[1000];

    scanf("%d",&casos);
    while(casos>0){
        scanf("%s",&entrada);
        for(i=0;entrada[i]!='\0';i++){
            if(entrada[i]=='<' && entrada[i+1] == '.'){
                removePontos(entrada, i+1);
                i = -1;
            }
            if(entrada[i]=='<' && entrada[i+1] == '>'){
                removeDiamante(entrada,i);
                diamantes++;
                i = -1;
            }
        }
        printf("%d\n", diamantes);
        diamantes = 0;
        casos--;
    }
    return 0;
}