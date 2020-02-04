#include <stdlib.h>
#include <stdio.h>

double calculaArea(double raio){
    return 3.14159 * (raio * raio);
}

int main(){
    double entrada;
    scanf("%lf",&entrada);
    printf("A=%.4lf\n",calculaArea(entrada));
    return 0;
}