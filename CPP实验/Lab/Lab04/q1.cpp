/*
question1:

Suppose there is an array of integers in ascending order. 

Input an integer N and insert N into the corresponding position so that the array is still in ascending order. 

Note N can be repeated with other numbers. Requirement: use Pointer to do this.

Example:

Input {1, 2, 3, 5, 7, 9} and 8. Output {1, 2, 3, 5, 7, 8, 9}

Input {1, 2, 3, 5, 7, 9} and 5. Output {1, 2, 3, 5, 5, 7, 9}
*/

#include<iostream>

#include<cstdlib>

using namespace std;


int* insert(int* p,int n,int pSize) {

        int t = 0;

        for(int i = 0;i < pSize;++i){

            if(n <= p[i]){

                t = i;

                break;

            }

        }

           

        int* r = (int*)malloc(sizeof(int)*(pSize + 1));

        for(int i = 0;i < t;++i){

            r[i] = p[i];

        }

        r[t] = n;

        for(int i = t;i < pSize;++i){

            r[i + 1] = p[i];

        }

        return r;

    }

   




int main(){

    int test[6] = {1, 2, 3, 5, 7, 9} ;

    int* tmp = insert(test,8,6);

    for(int i = 0;i < 7;++i){

        printf("%d \n",tmp[i]);

    }

}