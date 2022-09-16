#include<stdio.h>
#include<math.h>
int main(){
    int n, i, j, k = 1,a[1000];
    printf("pelase enter a number:\n");
    scanf("%d",&n);
    printf("2 is a prime number.\n");
    for(i = 2;i <= n; i++)
        {
            for(j = 2;j <= i; j++)
                {
                    if(i%j == 0)break;
                    if(j >= sqrt(i)&&j < sqrt(i) + 1){printf("%d is a prime number.\n",i);
                                    k++;}
                }
        }
    printf("there are %d prime numbers!",k);
    return 0;
}