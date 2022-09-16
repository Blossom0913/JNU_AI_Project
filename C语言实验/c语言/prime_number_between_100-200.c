#include<stdio.h>
#include<math.h>
int main(){
    int n,k,i,m=0;
    for(n=101;n<=200;n=n+2)
        {
        k=sqrt(n);
        for(i=2;i<=k;i++)
            if(m%i==0)continue;
        if(i>=k+1)
             {
              printf("%d",n);
              m=m+1;
              }
        if(m%10==0)printf("\n");
        printf("\n");
        return 0;
        }
}