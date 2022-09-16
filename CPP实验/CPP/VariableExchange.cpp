#include<iostream>
using namespace std;

int main(){
    int a, b;
    std::cin>>a>>b;
    a = a^b;
    b = a^b;
    a = a^b;
    std::cout<<"a is"<<a<<"b is"<<b<<endl;
    return 0;
}