#include<stdio.h>
int main(){
    char str[6]={'\0'};
    int num=0;
    gets(str);
    for(int i=0;i<6;i++){
        if((str[i])!='\0')num++;
    }
    printf("%d\n",num);
    for(int j=0;j<num;j++){
        if(str[j+1]!='\0')printf("%c ",str[j]);
        else if(str[j+1]=='\0')printf("%c",str[j]);
    }
    printf("\n");
    for(int k=0;k<num/2;k++){
        char t=0;
        t = str[k];
        str[k]=str[num-1-k];
        str[num-1-k]=t;
    }
    for(int i=0;i<num;i++){
    printf("%c",str[i]);}
    return 0;
}