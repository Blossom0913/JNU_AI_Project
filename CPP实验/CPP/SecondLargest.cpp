#include<iostream>
#include <string>
using namespace std;

int main(){
    int tar[100] = { 0 };
    int i = 0;
    while(cin>>tar[i]){++i;};
    for(int i = 0;i < 6;++i){
        for(int j = i + 1;j < 6;++j){
            if(tar[i] < tar[j]){
                tar[i] = tar[i]^tar[j];
                tar[j] = tar[i]^tar[j];
                tar[i] = tar[i]^tar[j];
            }
        }

    }
    cout<<tar[1]<<endl;
    return 0;
}