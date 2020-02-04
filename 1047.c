#include <stdlib.h>
#include <stdio.h>

int main(){
    int hora1,hora2,minuto1,minuto2;
    scanf("%d %d %d %d",&hora1,&minuto1,&hora2,&minuto2);
    if(hora2>=hora1){
        if(hora2==hora1 && (minuto2==minuto1 || minuto2<minuto1))
            hora2 = 24;
        else
            hora2 -= hora1;
    }else
        hora2 = (24-hora1)+hora2;
    minuto2 -= minuto1;
    if(minuto2<0){
        hora2 -= 1;
        minuto2 = 60 + minuto2;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora2,minuto2);
    return 0;
}