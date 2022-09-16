#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,p,s;
    scanf("%d,%d,%d",&a,&b,&c);
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("the square of angle is %d",s);
}