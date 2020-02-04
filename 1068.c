#include <stdlib.h>
#include <stdio.h>

int main(){
    int i,esq=0,dir=0;
    char entrada[10001];
    while(scanf("%s",&entrada)!=EOF){
        for(i=0;entrada[i]!='\0';i++){
            if(entrada[i]=='(')
                esq++;
            else if(entrada[i]==')')
                dir++;
            if(dir>esq){
                break;
            }
        }
        if(esq==dir)
            printf("correct\n");
        else   
            printf("incorrect\n");
        esq = 0;
        dir = 0;
    }
    return 0;
}