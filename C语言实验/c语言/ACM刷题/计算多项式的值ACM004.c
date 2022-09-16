#include<stdio.h>
#include<math.h>

int main(){
    double f2(int n , double a[] , double x);
    int n;
    while(scanf("%d",&n)!=EOF){
        double num[10000];
        for(int i = 0;i <= n;++i){
            scanf("%lf",num+i);
        }
        int m;
        scanf("%d",&m);
        double ans[1000];
        for(int j = 0;j < m;++j){
            double x;
            scanf("%lf",x);
            ans[j] = f2(n+1,num,x);
        }
        for(int j = 0;j < m;++j){
            printf("%lf",ans[j]);
            if(j!=m-1)printf(" ");
        }
        printf("\n");
    }
}

  double f2(int n , double a[] , double x)
 {
 	int i;
 	double p = a[0];
 	for(i = 1;i < n ;i++){
 		p += (a[i] * pow(x,i));
	 }
	 return p;
  } 