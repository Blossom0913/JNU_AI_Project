#include<iostream>
using namespace std;


int main(){
    char a;
    while((a = getchar())!=EOF){
        getchar();
        if(a >= 'A'&& a<= 'Z'){
            a = 'Z' - a + 'A';
            
        }
        if(a>='a'&&a<='z'){
            a = 'z' - a + 'a';
        }
        putchar(a);
        printf("\n");
    }
    return 0;

}