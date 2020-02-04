#include <stdlib.h>
#include <stdio.h>

int compara(const void *a,const void *b){
    return ((*(double*)b-*(double*)a));
}

double quadrado(double n){
    return n*n;
}

int main(){
    int i;
    double valores[3];
    scanf("%lf %lf %lf",&valores[0],&valores[1],&valores[2]);
    qsort(valores,3,sizeof(double),compara);
    if(valores[0]>=valores[1]+valores[2])
        printf("NAO FORMA TRIANGULO\n");
    else{
        if(quadrado(valores[0])==quadrado(valores[1])+quadrado(valores[2]))    
            printf("TRIANGULO RETANGULO\n");
        if(quadrado(valores[0])>quadrado(valores[1])+quadrado(valores[2]))
            printf("TRIANGULO OBTUSANGULO\n");
        if(quadrado(valores[0])<quadrado(valores[1])+quadrado(valores[2]))
            printf("TRIANGULO ACUTANGULO\n");
        if(valores[0] && valores[1] && valores[0] == valores[2])
            printf("TRIANGULO EQUILATERO\n");
        else if(valores[0]==valores[1] || valores[0]==valores[2] || valores[1]==valores[2])
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}