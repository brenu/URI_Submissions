#include <stdlib.h>
#include <stdio.h>

int main(){
    int entrada1;
    float entrada2;
    scanf("%d %f",&entrada1,&entrada2);
    printf("%.3f km/l\n",entrada1/entrada2);
    return 0;
}