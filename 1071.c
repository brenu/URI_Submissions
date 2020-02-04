#include <stdlib.h>
#include <stdio.h>

int main(){
    int i,entrada1,entrada2,soma=0;
    scanf("%d %d",&entrada1,&entrada2);
    if(entrada1<entrada2){
        if(entrada1%2==0){
            for(i=entrada1+1;i<entrada2;i+=2)
                soma += i;
        }else{
            for(i=entrada1+2;i<entrada2;i+=2)
                soma += i;
        }   
    }else if(entrada2<entrada1){
        if(entrada2%2==0){
            for(i=entrada2+1;i<entrada1;i+=2)
                soma += i;
        }else{
            for(i=entrada2+2;i<entrada1;i+=2)
                soma += i;
        }  
    }
    printf("%d\n",soma);
    return 0;
}