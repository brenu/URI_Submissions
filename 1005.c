#include <stdio.h>
#include <stdlib.h>

double calculaMedia(double n1,double n2){
    double aux = 0;
    aux = (n1*3.5+n2*7.5);
    aux = aux/11;
    return aux;
}


int main(){
    double entrada1,entrada2;
    scanf("%lf %lf",&entrada1,&entrada2);
    printf("MEDIA = %.5lf\n",calculaMedia(entrada1,entrada2));
    return 0;
}