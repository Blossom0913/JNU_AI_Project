#include<stdio.h>
int main(){
    int N, i, j, tmp, fuhao, end, k;
    scanf("%d",&N);
    int matrixA[10][10]={0}, matrixB[10][10]={0};
    int matA[10][10]={0}, matB[10][10]={0};
    
    for(i = 0;i < N;++i){
        for(j = 0;j < N;++j){
            scanf("%d",&matrixA[i][j]);
            fuhao = getchar();
            if(fuhao == '+')scanf("%d",&matA[i][j]);
            if(fuhao == '-')scanf("%d",&tmp);matA[i][j] = -tmp;
            end = getchar();
            if(end == 'i')continue;
        }
    }
    
    for(i = 0;i < N;++i){
        for(j = 0;j < N;++j){
            scanf("%d",&matrixB[i][j]);
            fuhao = getchar();
            if(fuhao == '+')scanf("%d",&matB[i][j]);
            if(fuhao == '-')scanf("%d",&tmp);matB[i][j] = -tmp;
            end = getchar();
            if(end == 'i')continue;
        }
    }

    int output[N][N], outp[N][N];
    for(i = 0;i < N;++i){
        for(j = 0;j < N;++j){
            int tmp1, tmp2;
            for(k = 0;k < N;++k){
                tmp1 += matrixA[i][k]*matrixB[k][j]-matA[i][k]*matB[k][j];
                tmp2 += matrixA[i][k]*matB[k][j]+matA[i][k]*matrixB[k][j];
            }
            output[i][j] = tmp1;
            outp[i][j] = tmp2;
            tmp1 = tmp2 = 0;
        }
    }

    for(i = 0;i < N;++i){
        for(j = 0;j < N;++j){
            if(outp[i][j]==1)printf("%d+i",output[i][j]);
            if(outp[i][j]==-1)printf("%d-i",output[i][j]);
            else printf("%d%di",output[i][j],outp[i][j]);
            if(j!=N-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}