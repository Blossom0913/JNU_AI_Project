#include<stdio.h>

int calculate(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 4;
    }
    int k = 0,i;
    if(n > 3){
        for(i = 1;i < n;++i){
            k += calculate(i);
        }
        return k + 1;
    }
}

int main(){
    int n;
    while(scanf("%d",&n)!=0){
        printf("%d\n",calculate(n));
    }
    return 0;
}