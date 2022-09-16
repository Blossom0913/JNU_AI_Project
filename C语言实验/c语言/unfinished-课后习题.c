#include<stdio.h>
int main(){
    char str[50];
    int zi=0,blank=0,num=0,other=0,i;
    gets(str);
    for(i=0;i<50&&str[i]!='\0';i++){
        if(str[i]==' ')blank++;
        else {if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))zi++;
                else {if(str[i]>=48&&str[i]<=57)num++;
                        else other++;}}
    }
    printf("%d %d %d %d",zi,num,blank,other);
    return 0;
}