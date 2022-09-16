#include<stdio.h>
int main(){
    int transfer(int),countN(int);
    void daying(int gua,int N);
    int a,n,N,gua;
    scanf("%d",&a);
    n = transfer(a);
    N = countN(a);
    gua = n%10;
    daying(gua,N);
    // printf("%d",n);
    // printf("%d",N);
    printf("%d",gua);
    return 0;
}

int transfer(int x){
    int p=1,y=0,shu;
    do{
        shu=x%8;
        y+=shu*p;
        p*=10;
        x = (x-shu)/8;
    }while(x>=1);
    return(y);
}

int countN(int x){
    int p=1,y=0,N=0,shu;
    do{ N++;
        shu=x%8;
        x = (x-shu)/8;
    }while(x>=1);
    return(N);
}

void daying(int gua,int N){
    int er[3];
    for(int i=2;i>=0;i--){
        er[i]=gua%2;
        gua=gua/2;
    }
    for(int j=0;j<N;j++){
        if(er[j]==1){for(int k=0;k<3*N;k++){printf("-");}printf("\n");}
        else {for(int k=0;k<3*N;k++){if(k<N||k>=2*N){printf("-");}
                                     else printf(" ");}
                                printf("\n");}
    }
}