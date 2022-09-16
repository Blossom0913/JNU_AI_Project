#include<stdio.h>
int count(int s);
int main(){
    int m,d,i=0,n=1,t=0,s,output;
    do{
        scanf("%d/%d",&m,&d);
        if(m>8||m<7||n<=0||n>31)return 0;
        s=(m-7)*31+d;
        output = count(s);
        printf("%d\n",output);
        }
    while(m!=0&&d!=0);

}

int count(int s){
    int a[10]={1,3,6,10,15,21,28,36,45,55};
    int n=1,t=0;
    for(int i=0;i<10;i++){
        if(a[i]>=s) t++;
    }
    return(t);
}