#include<stdio.h>
int main(){
    char string[1000];
    gets(string);
    int sum=0,word=0,i;
    for(i=0;(string[i])!='\n';i++){
        if(string[i]==' ')word=0;
        else if(word==0){word=1;sum++;}
    }
    printf("There are %d words in this line.\n",sum-1);
    return 0;
}