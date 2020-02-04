#include <stdlib.h>
#include <stdio.h>

int main(){
    char i1[15],i2[15],i3[15];
    scanf("%s %s %s",i1,i2,i3);
    if(strcmp(i1,"vertebrado")==0 && strcmp(i2,"ave")==0 && strcmp(i3,"carnivoro")==0)
        printf("aguia\n");
    else if(strcmp(i1,"vertebrado")==0 && strcmp(i2,"ave")==0 && strcmp(i3,"onivoro")==0)
        printf("pomba\n");
    else if(strcmp(i1,"vertebrado")==0 && strcmp(i2,"mamifero")==0 && strcmp(i3,"onivoro")==0)
        printf("homem\n");
    else if(strcmp(i1,"vertebrado")==0 && strcmp(i2,"mamifero")==0 && strcmp(i3,"herbivoro")==0)
        printf("vaca\n");
    else if(strcmp(i1,"invertebrado")==0 && strcmp(i2,"inseto")==0 && strcmp(i3,"hematofago")==0)
        printf("pulga\n");
    else if(strcmp(i1,"invertebrado")==0 && strcmp(i2,"inseto")==0 && strcmp(i3,"herbivoro")==0)
        printf("lagarta\n");
    else if(strcmp(i1,"invertebrado")==0 && strcmp(i2,"anelideo")==0 && strcmp(i3,"hematofago")==0)
        printf("sanguessuga\n");
    else if(strcmp(i1,"invertebrado")==0 && strcmp(i2,"anelideo")==0 && strcmp(i3,"onivoro")==0)
        printf("minhoca\n");
    return 0;
}