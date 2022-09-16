#include<stdio.h>
int main(){
    char char_x,m,n,a,A;
    a=97;A=65;
    printf("Please enter a character:");
    scanf("%c",&char_x);
    if((char_x>='a'&&char_x<='m')){
        // n=char_x-a;
        m=char_x+char_x-a+1;
        // printf("%c",m);
    }
    if(char_x>='A'&&char_x<='M'){
        // n=char_x-A;
        m=char_x+char_x-A+1;
        // printf("%c",m);
    }
    if(char_x>'M'&&char_x<='Z'){
        m=char_x+char_x-A-25;
        // printf("%c",m);
        // 在这里，由于字母表是闭环，所以超过一圈时要减掉一周的量
    }
    if(char_x>'m'&&char_x<='z'){
        m=char_x+char_x-a-25;
        // printf("%c",m);
    }
    printf("%c",m);
    return 0;
}