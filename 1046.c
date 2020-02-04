#include <stdlib.h>
#include <stdio.h>

int main(){
    int hora1,hora2;
    scanf("%d %d",&hora1,&hora2);
    if(hora2>hora1)
        hora1 = hora2-hora1;
    else if(hora1>hora2)
        hora1 = (24-hora1)+hora2;
    else
        hora1 = 24;
    printf("O JOGO DUROU %d HORA(S)\n",hora1);
    return 0;
}