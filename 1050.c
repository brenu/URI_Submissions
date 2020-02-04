#include <stdio.h>
#include <stdlib.h>

int main(){
    int entrada;
    scanf("%d",&entrada);
    if(entrada==61)
        printf("Brasilia\n");
    else if(entrada==71)
        printf("Salvador\n");
    else if(entrada==11)
        printf("Sao Paulo\n");
    else if(entrada==21)
        printf("Rio de Janeiro\n");
    else if(entrada==32)
        printf("Juiz de Fora\n");
    else if(entrada==19)
        printf("Campinas\n");
    else if(entrada==27)
        printf("Vitoria\n");
    else if(entrada==31)
        printf("Belo Horizonte\n");
    else
        printf("DDD nao cadastrado\n");
    return 0;
}