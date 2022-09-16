#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    while(scanf("%d %d",&a,&b)!=EOF) {
        int ans = 0;
        int a2, b2;
        while(a > 0||b > 0) {
            a2 = a % 2;
            b2 = b % 2;
            ans += a2^b2;
            a /= 2;
            b /= 2;
        }
        printf("%d\n",ans);
    }
    return 0;
}