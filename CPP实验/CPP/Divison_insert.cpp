#include<iostream>
#include<stdlib.h>
#include <vector>
#include <array> 
using namespace std;

vector<int> Division_Insert(vector<int> arr,int ele){
    int len = arr.size();
    int l = 0;
    int r = len - 1;
    while(l < r){
        if((r - l)==1){
            arr.insert(arr.begin() + r,ele);
            break;
        }
        if(ele > arr[l]){
            l++;
        }
        else if(ele < arr[r]){
            r--;
        }
        else break;
    }
    return arr;
}


int main(){
    vector<int> num =  {1, 2, 3, 5, 7, 9};
    vector<int> ret;
    ret = Division_Insert(num,8);
    for(int i = 0;i < ret.size();++i){
        cout<<ret[i]<<endl;
    }
    return 0;
}