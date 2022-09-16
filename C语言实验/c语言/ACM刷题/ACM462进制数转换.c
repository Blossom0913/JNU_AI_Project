#include<stdio.h>
#include<string.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--) {
        int N;
        scanf("%d",&N);
        int ans = 0;
        char X[10];
        scanf("%s",&X);
        int i;
        int a = 1;
        for(i = strlen(X)-1;i >= 0;i--){
            if(X[i]>='A'&&X[i]<='F'){
                ans += (X[i]-'A'+10)*a;
                
            }
            else{
                ans += (X[i]-'0')*a;
                
            }
            a *= N;
        }
        printf("%d\n",ans);
    }
    return 0;
}