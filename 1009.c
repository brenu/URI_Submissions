#include <stdlib.h>
#include <stdio.h>

int main(){
    char lixo[100];
    double salario,vendas;
    scanf("%s %lf %lf",lixo,&salario,&vendas);
    vendas = vendas * 0.15;
    salario += vendas;
    printf("TOTAL = R$ %.2lf\n",salario);
    return 0;
}