#include<stdio.h>

long long main(){
    long long sn = 0;
    int i = 0,n, j = 1;
    scanf("%d",&n);
    for(;i < n;++i){
        j = j*(i+1);
        sn += j;
    }
    return(sn);
}

