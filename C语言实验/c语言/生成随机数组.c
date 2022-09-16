#include<stdio.h>
#include<time.h>
#include<stdlib.h>
# define SIZE 15
# define N 3
int main(){
    int a[SIZE],b[SIZE/N]={0};
    int i,j,sum;
    srand(time(0));
    printf("array a:\n");
    for(i=0;i<SIZE;i++){
    a[i]=rand()%50;
    printf("%4d",a[i]);
}
printf("\n array b\n");  
for(sum=0,i=0,j=0; i<=SIZE;i++){
    sum+=a[i];
    if((i+1)%3==0){
        b[j]=sum;printf("%4d",b[j]);
        sum=0;
        j++;
    }}
    printf("\n\n");
    return 0;
}