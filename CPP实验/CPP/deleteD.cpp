#include<iostream>
#include <string>
using namespace std;

int main(){
    string str;
    while(cin>>str){
        string ans = "";
        int cnt = 0;
        for(char s:str){
            if(s!='d'){
                ans += s;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}