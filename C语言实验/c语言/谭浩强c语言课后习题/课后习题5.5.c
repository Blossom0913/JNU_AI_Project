#include<stdio.h>
int main(){
    int function(int);
    int x,output;
    scanf("%d",&x);
    output = function(x);
    printf("%d",output);
    return 0;
}

int function(int x){
    int y;
    if(x<1)y = x;
    else if(x<10)y = 2*x-1;
    if(x>=10)y = 3*x-11;
    return(y);
}