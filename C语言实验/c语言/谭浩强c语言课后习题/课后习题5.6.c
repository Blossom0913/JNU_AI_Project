#include<stdio.h>
int main(){
    int grade;
    scanf("%d",&grade);
    if(grade>=90)printf("A");
    else if(grade>=80)printf("B");
    if(grade>=70&&grade<80)printf("C");
    else if(grade>=60&&grade<70)printf("D");
    if(grade<60)printf("E");
    return 0;
}