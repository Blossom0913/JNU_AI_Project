#include<stdio.h>
int main(){
    # define PI 3.14
    int radius;
    double area;
    scanf("%d",&radius);
    area=PI*radius*radius;
    printf("radius=%d,area=%6.2f\n",radius,area);
    return 0;
}