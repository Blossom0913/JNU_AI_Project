/*
question3:

Input a 4-digit integer A from the keyboard.

Decompose every digit of A and reverse all 4 digits to form a new 4-digit integer B. 

After that, calculate A+B. For example, input: 6829, output: 6829+9286=16115.

*/


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


