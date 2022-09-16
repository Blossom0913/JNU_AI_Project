#include<iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin>>N;
    if(N&1){
        cout<<N<<"="<<N / 2<<"+"<<N / 2 + 1<<endl;
        for(int i = 3;i < N / 2;++i){
            if(N%i==0){
                int center = N / i;
                int start = center - i / 2;
                if(start > 0){cout<<N<<"=";
                for(int j = 0;j < i;++j){
                    cout<<start+j;
                    if(j!=i - 1)cout<<"+";
                }
                cout<<endl;}
            }
        }
    }
    else if(!(N&1)){
        for(int i = 3;i < N/2;++i){
            if(N%i==0&&(i&1)){
                int center = N / i;
                int start = center - i / 2;
                if(start > 0){cout<<N<<"=";
                for(int j = 0;j < i;++j){
                    cout<<start+j;
                    if(j!=i - 1)cout<<"+";
                }
                cout<<endl;}
            }
            if(N%i==0&&!(i&1)){
                int len = 2*i;
                int center = N / len;
                int start = center - i + 1;
                if(start > 0){
                    cout<<N<<"=";
                    for(int j = 0;j < len;++j){
                    cout<<start+j;
                    if(j!=i - 1)cout<<"+";
                }
                cout<<endl;}}

            }
        }

        else cout<<"not found"<<endl;
    
    return 0;
    }
    

