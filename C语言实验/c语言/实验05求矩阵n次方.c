#include<stdio.h>
int main(){
    int T,i,j,k;
    scanf("%d",&T);
    int M[T],N[T];
    for(i=0;i<T;i++){
        scanf("%d %d",&M[i],&N[i]);
    }
    for(i=0;i<T;i++){
        int a[M[i]][M[i]],temp,c=0;
        for(k=0;k<M[i];k++){
            for(j=0;j<M[i];j++){
                scanf("%d",*(a+i)+j);
            }
        }
        int output[M[i]][M[i]];
        for(i=0;i<M[i];i++){
            for(j=0;j<M[i];j++){
                temp = (*(*(a+i)+j)) * (*(*(a+j)+i));
                c+=temp;
            }
            for(k=0;k<M[i];k++){
                *(*(output+i)+k)=c;
                c=0;
            }
        }
        printf("Case %d:\n",i);
        for(i=0;i<M[i];i++){
            for(j=0;j<M[i];j++){
                printf("%d ",*(*(output+i)+j));
            }
            printf("\n");
        }

    }
    
}

// void matrix(int **p;int M;int N){

// }