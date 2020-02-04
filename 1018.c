#include <stdio.h>
#include <stdlib.h>

int *contaCedulas(int valor,int *vet){
    while(valor>0){
        if(valor>=100){
            valor -= 100;
            vet[0]++;
        }else if(valor>=50){
            valor -= 50;
            vet[1]++;
        }else if(valor>=20){
            valor -= 20;
            vet[2]++;
        }else if(valor>=10){
            valor -= 10;
            vet[3]++;
        }else if(valor>=5){
            valor -= 5;
            vet[4]++;
        }else if(valor>=2){
            valor -= 2;
            vet[5]++;
        }else if(valor>=1){
            valor -= 1;
            vet[6]++;
        }
    }
    return vet;
}

int main(){
    int entrada,i;
    int vet[7];
    for(i=0;i<7;i++){
        vet[i] = 0;
    }
    scanf("%d",&entrada);
    contaCedulas(entrada,vet);
    printf("%d\n",entrada);
    printf("%d nota(s) de R$ 100,00\n",vet[0]);
    printf("%d nota(s) de R$ 50,00\n",vet[1]);
    printf("%d nota(s) de R$ 20,00\n",vet[2]);
    printf("%d nota(s) de R$ 10,00\n",vet[3]);
    printf("%d nota(s) de R$ 5,00\n",vet[4]);
    printf("%d nota(s) de R$ 2,00\n",vet[5]);
    printf("%d nota(s) de R$ 1,00\n",vet[6]);
    return 0;
}