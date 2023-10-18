/*
question3:

There are N positive integers in an array.

Only one of them appears an odd number of times. 

The others appear an even number of times. 

Find the number that appears an odd number of times and output it. 

For example, input an array {1, 2, 4, 3, 3, 1, 3, 4, 2}, then output 3. 
*/

#include<iostream>


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