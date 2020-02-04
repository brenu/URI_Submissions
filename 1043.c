#include <stdlib.h>
#include <stdio.h>

int compara(const void *a,const void *b){
    return ((*(float*)b-*(float*)a));
}

int main(){
    float a,b,c;
    float valores[3];
    scanf("%f %f %f",&a,&b,&c);
    valores[0] = a;
    valores[1] = b;
    valores[2] = c;
    qsort(valores,3,sizeof(float),compara);
    
    if(valores[0]>=valores[1]+valores[2])
        printf("Area = %.1f\n",(a+b)*c/2);
    else{
        printf("Perimetro = %.1f\n",(valores[0]+valores[1]+valores[2]));
    }

    return 0;
}