#include<stdio.h>
#include<string.h>
int main(){
    char str[20][8];
    char output[5][5];
    int i,n,x=65;
    int a[5]={0};
    scanf("%d",&n);
    for(i=0;i<=n*(n-1)/2;i++){
        gets(str[i]);
                            }
    for(i=0;i<=n*(n-1)/2;i++){
        if(str[i][2]=='>'){
            if(str[i][0]=='A')a[0]++;
            if(str[i][0]=='B')a[1]++;
            if(str[i][0]=='C')a[2]++;
            if(str[i][0]=='D')a[3]++;
            if(str[i][0]=='E')a[4]++;
                            }
        if(str[i][2]=='<'){
            if(str[i][4]=='A')a[0]++;
            if(str[i][4]=='B')a[1]++;
            if(str[i][4]=='C')a[2]++;
            if(str[i][4]=='D')a[3]++;
            if(str[i][4]=='E')a[4]++;        }
                            }
        x = 65+i;
        for(i=0;i<n;i++){
            output[i]="x:a[i]";
        }
    // for(i=0;i<n;i++){
    // // printf("%c:%d\n",x,a[i]);x++;
    // output[i] = ":"
                    }
    return 0;
            }      
