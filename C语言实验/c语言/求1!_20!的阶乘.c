#include<stdio.h>
int main(){
    double sum=0,m=1;
    // sum不能是long或者int，因为太大了
    int n=1;
    for(int n=1;n<=20;n++)
        m=m*n;
       sum=sum+m; 
    printf("%22.15e\n",sum);
}