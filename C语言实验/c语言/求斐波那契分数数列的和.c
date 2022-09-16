#include<stdio.h>
// 递归算法
double  Fibonacci(unsigned n){
    if (n>2)
        return Fibonacci(n-1)+Fibonacci(n-2);
    else
        return 1;
}

int main(){
    double sum=0.0,i;
    for(int n=1;n<=20;n++)
        {i=Fibonacci(n+1)/Fibonacci(n);
        sum=sum+i;}
    printf("%lf",sum);
    return 0;
}