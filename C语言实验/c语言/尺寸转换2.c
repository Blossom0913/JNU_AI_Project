#include<stdio.h>
int main(){
    int inch,cun;
    float meter;
    scanf("%d,%d",&inch,&cun);
    meter=inch*0.3048+cun*0.0254;
    printf("The meter is %f\n",meter);
}