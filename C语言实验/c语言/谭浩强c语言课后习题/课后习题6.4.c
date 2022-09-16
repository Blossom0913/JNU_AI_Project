#include<stdio.h>
long long main(){
    int n,i;
    long long sums;
    int jie(int);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sums += jie(i);
    }
    printf("%d",sums);
    return 0;
}

int jie(int x){
    int sum;
    sum = x*jie(x-1);
    return(sum);
} 