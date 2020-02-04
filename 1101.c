#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,m,sum = 0;
    while(scanf("%d %d",&n,&m) != EOF && n > 0 && m > 0){
        sum = 0;
        if(n<m){
            for(i=n;i<=m;i++){
                printf("%d ",i);
                sum+=i;
            }
        }else{
            for(i=m;i<=n;i++){
                printf("%d ",i);
                sum+=i;
            }
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}