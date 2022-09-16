#include<iostream>

int main(){
    int fib[50] = { 0 };   //Single DP Solution.
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2;i < 50;++i){
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    int idx;
    while(scanf("%d",&idx)!=EOF){
    printf("%d\n",fib[idx - 1]);}
    return 0;
}