#include<stdio.h>
#include<stdlib.h>

double multiply(double num[],double x,int n) {
    int i;
    double ans = num[0];
    for(i = 0;i < n;++i){
        ans *= x;
        ans += num[i+1];
    }
    return ans;
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF) {
        int i,m;
        double *num = (double*)malloc(n*sizeof(double));
        for(i = 0;i < n;++i){
            scanf("%f",num+i);
        }
        scanf("%d",&m);
        double *xm = (double*)malloc(m*sizeof(double));
        for(i = 0;i < m;++i){
            double x;
            scanf("%f",&x);
            xm[i] =  multiply(num,x,n);
        }
        for(i = 0; i < m;++i){
            printf("%d",xm[i]);
            if(i!=m-1)printf(" ");
        }
        printf("\n");
        free(xm);
        free(num);
    }
}

