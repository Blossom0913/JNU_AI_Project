#include<stdio.h>

int main() {
    int n;
    while(scanf("%d",&n)!=EOF) {
        int ans = 0;
        while(n!=0) {
            int i = n % 2;
            if(i==1)ans++;
            n /= 2;
        }
        printf("%d\n",ans);
    }
    return 0;
}