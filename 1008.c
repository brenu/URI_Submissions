#include <stdlib.h>
#include <stdio.h>

int main(){
    int numeroFuncionario, horas;
    float salario;
    scanf("%d %d %f",&numeroFuncionario,&horas,&salario);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",numeroFuncionario,horas*salario);
    return 0;
}