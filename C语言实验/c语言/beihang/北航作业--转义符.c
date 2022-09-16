#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char a[10];
    int start,end;
    gets(a);
    for(int i = 0;i < strlen(a);++i){
        if(a[i]=='{')start = i;
        if(a[i]=='}')end = i;
    }
    int k = start+1;
    int l = 0;
    char b[end - start];
    while(a[k]!='}'){
        b[l] = a[k];
        l++;k++;
    }

    for(int i = 0;i < strlen(b);++i){
        printf("%c",b[i]);
    }
    printf(",");
    for(int i = 0;i < strlen(b);++i){
        printf("%c",b[i]);
    }
    printf("\\to 0");
    return 0;
    
}