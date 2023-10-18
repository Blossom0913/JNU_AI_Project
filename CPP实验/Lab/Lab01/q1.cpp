/*
question1: 

Swap two numbers and output the result before and after the swap. For example, if 3, 5 is input, the output is

Before: a=3, b=5

After: a=5, b=3
*/

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