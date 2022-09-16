#include<stdio.h>
#include<math.h>
int main(){
    double y;
    int xx,xs,xc;
    for(y=1;y>=-1;y-=0.1){
        xc=acos(y)*10;
        xs=asin(y)*10;
        if(xs<0){
            xs=-xs+31;
        }
        for(xx=0;xx<=62;xx++){
            if(xx==xs||xx==31-xs||xx==93-xs){
                printf("*");
            }
            else if(xx==xc||xx==62-xc){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}