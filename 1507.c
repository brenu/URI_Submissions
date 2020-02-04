#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int isSubstring(char *str1, char *str2){
    int i=0,j = 0;
    int tamanho = strlen(str1);
    while(i<tamanho){
        if(str1[i]==str2[j]){
            j++;
        }
        i++;
    }
    if(j==strlen(str2))
        return 1;
    return 0;
}

int main(){
    int i,n=0,q=0;
    char texto[100060];
    char entrada[1010];
    while(scanf("%d",&n)!=EOF){
        scanf("%s",&texto);
        scanf("%d",&q);
        for(i=0;i<q;i++){
            scanf("%s",&entrada);
            if(isSubstring(texto,entrada)==1)
                printf("Yes\n");
            else
                printf("No\n");       
        }
    }
    return 0;
}