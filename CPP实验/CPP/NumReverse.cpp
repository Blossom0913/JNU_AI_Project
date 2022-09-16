#include<iostream>
using namespace std;

int NumReverse(int num) {
    int ret = 0;
    int tmp = 0;
    while(num > 0){
        tmp = num % 10;
        num /= 10;
        ret *= 10;
        ret += tmp;
    }
    return ret;
}

int main(){
    int num_4, reverse_num4, sum;
    cin>>num_4;
    cout<<NumReverse(num_4)<<endl;
    cout<<num_4 + NumReverse(num_4)<<endl;
}