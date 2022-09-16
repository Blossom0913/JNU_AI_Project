#include<stdio.h>
unsigned long Fibonacci(unsigned n){
    if (n>2)
        return Fibonacci(n-1)+Fibonacci(n-2);
    else
        return 1;
}
int main(){
long int n,m;
scanf("%d",&m);
n=Fibonacci(m);
printf("%d",n);
}