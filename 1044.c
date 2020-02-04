#include <stdlib.h>
#include <stdio.h>

int main(){
    int entrada1, entrada2, maior, menor;
    scanf("%d %d",&entrada1,&entrada2);
    if(entrada1>entrada2){
        maior = entrada1;
        menor = entrada2;
    }else if(entrada2>entrada1){
        maior = entrada2;
        menor = entrada1;
    }else{
        printf("Sao Multiplos\n");
        return 0;
    }
    if(maior%menor == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}