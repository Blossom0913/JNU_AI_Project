#include<iostream>
#include <unordered_map>
using namespace std;

int main(){
    int tar[100] = { 0 };
    int i = 0;
    while(cin>>tar[i]){i++;};
    int hash[10] = { 0 };
    for(int j = 0;j < i;++j){
        ++hash[tar[j]];
    }
    for(int j = 0;j < 10;++j){
        if(hash[j]%2!=0)cout<<j<<endl;
    }
}


// hash_map<type,type>::iterator iter;
// for(  iter = table_name.begin();iter!=table_name.end();iter++){
// 	cout << iter->first << iter->second;
// 	table_name.erase(iter)//删除该键值
// }