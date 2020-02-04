#include <stdio.h>
#include <stdlib.h>

int main(){
    int lixo, entrada1;
    float entrada2, total = 0;
    scanf("%d %d %f",&lixo,&entrada1,&entrada2);
    total = total + entrada1*entrada2;
    
    scanf("%d %d %f",&lixo,&entrada1,&entrada2);
    total = total + entrada1*entrada2;
    
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}