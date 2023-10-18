/*
question1:

Input a string and extract the substring containing numeric characters. 

Convert each substring into an integer and add them together. 

At last, output the summed result.

Example:

Input tre89a533uert ier2567jr4p

Output 3193 (89+533+2567+4)
*/

#include<iostream>

#include<string>

using namespace std;



int cal(string s){

    int ans = 0;

    int tmp = 0;

    for(auto w:s){

       

        if(w>'0'&&w<='9'){

            tmp *= 10;

            tmp += w - '0';

        }

        else{

            ans += tmp;

            tmp = 0;

        }

    }

    return ans;

}


int main(void){

    string test = "tre89a533uert ier2567jr4p";

    cout << cal(test) << endl;

    return 0;

}