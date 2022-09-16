#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char string[10][500],stra[10][500],strb[10][500];
    int n;
    char *buf[3], *p;
	int i = 0;
	p = NULL;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        gets(string[i]);
    }
    p = strtok(string, " ");       
	while(p)
	{
		buf[i] = p;
		++i;p = strtok(NULL, " ");   
	}                           
	for (i = 0; i < 2; ++i)
	{
		printf("%s\n", buf[i]);
	}
	return 0;
}