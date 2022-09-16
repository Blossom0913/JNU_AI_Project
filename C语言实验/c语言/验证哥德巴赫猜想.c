#include<stdio.h>
int isprime(int);
void even(int);
void main(){
    int a;
    printf("Enter an even number:");
    scanf("%d",&a);
    if(a%2==0)even(a);
    else printf("%d is not even prime number:\n",a);
}
void even(int x){
    int i;
    for(i=2;i<x/2;i++)
    if(isprime(i))
        if(isprime(x-i))
        { printf("%d = %d + %d\n",x,x-i,i);return;}
}
int isprime(int a){
    int i;
    for(i=2;i<=a/2;i++)
        if(a%i==0)return 0;
    return 1;
}