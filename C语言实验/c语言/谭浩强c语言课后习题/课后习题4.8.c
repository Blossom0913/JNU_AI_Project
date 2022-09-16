#include<stdio.h>
int main(){
    # define PI 3.14
    float r,h;
    float C1,Sa,Sb,Va,Vb;
    scanf("%f %f",&r,&h);
    C1 = 2*PI*r;
    Sa = PI*r*r;
    Sb = 4*PI*r*r;
    Va = (4*PI*r*r*r)/3;
    Vb = Sa*h;
    printf("C1=%.2f\n",C1);
    printf("Sa=%.2f\n",Sa);
    printf("Sb=%.2f\n",Sb);
    printf("Va=%.2f\n",Va);
    printf("Vb=%.2f\n",Vb);
    return 0;
}
// 求圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb