#include<stdio.h>

int main(){
    int M,N,T,t,test;
    scanf("%d",&T);
    for(test=1;test<=T;++test){
        scanf("%d %d",&M,&N);
        int res[4][4]={{1,0,0,0},
                        {0,1,0,0},
                        {0,0,1,0},
                        {0,0,0,1}};
        int A[4][4];
        int i,j,t,k;
        for(i=0;i<M;i++){
            for(j=0;j<M;j++){
                scanf("%d",&A[i][j]);
            }
        }
        for(t=0;t<N;++t){
            int tmp[4][4]={0};
            for(i=0;i<M;++i){
                for(j=0;j<M;++j){
                    for(k=0;k<M;++k){
                        tmp[i][j]+=res[i][k]*A[k][j];
                    }
                }
            }
            for(i=0;i<M;i++){
                for(j=0;j<M;j++){
                    res[i][j]=tmp[i][j];
                }
            }
        }
        printf("Case %d:\n",test);
        for(i=0;i<M;i++){
            for(j=0;j<M;j++){
                printf("%d",res[i][j]);
                if(j!=M-1)printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}