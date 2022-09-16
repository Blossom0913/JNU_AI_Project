#include<stdio.h>

int loop(int n)
{
	if(n < 1){
		return 0;
        }
    if(n==1||n==2){
        return n;
    }
	int sum = 0;
	int two = 1;
	int one = 2;
	int i;
		
	for( i = 3; i <= n; ++i)
		{
			 sum = two + one;
            two = one;
            one = sum;
		}
		return sum;
	
}

int main(){
    int n;
    do {
        scanf("%d",&n);
        if(n==0)break;
        else{
        printf("%d\n",loop(n));}
    }while(n);
    return 0;
}