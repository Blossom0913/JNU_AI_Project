#include<stdio.h>
int max(int x,int y){
    int z;
    z=x>y?x:y;
    return z;
}

int main(){
    int a,b,c;
    printf("please enter 2 numbers:");
    scanf("%d%d",&a,&b);
    c = max(a,b);
    printf("the bigger number is %d",c);
    return 0;
}