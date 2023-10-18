/*
question3:

Given a string containing only characters ‘a’-’z’. 

Find the longest substring that does not contain repeated characters. 

For example:

Input " abcdefhagikjnmlpmqorstuobvwxyz"

Output "bcdefhagikjnmlp"
*/

#include<iostream>
#include <unordered_set>

#include<string>



using namespace std;


string SubMax(string s){

    unordered_set<char> occ;

        int l = 0;  //right border register

        int r = 0;  //left border register

        int n = s.size();

        // right pointer，初始值为 -1，相当于我们在字符串的左边界的左侧，还没有开始移动

        int rk = -1, ans = 0;

        // enumerate the positions of Left Pointer，初始值隐性地表示为 -1

        for (int i = 0; i < n; ++i) {

            if (i != 0) {

                // 左指针向右移动一格，移除一个字符

                occ.erase(s[i - 1]);

            }

            while (rk + 1 < n && !occ.count(s[rk + 1])) {

                // 不断地移动右指针

                occ.insert(s[rk + 1]);

                ++rk;

            }

            // 第 i 到 rk 个字符是一个极长的无重复字符子串

            if((rk - i + 1) > ans){

                ans = rk - i + 1;

                l = i;

                r = rk;

            }

        }

        string ret = "";

        for(int i = l;i <= r;++i){

            ret += s[i];

        }

        return ret;


}


int main(void){

    string test = "abcdefghagikjnmlpmqorstuobvwxyz";

    cout << test << endl;

    cout << SubMax(test) << endl;

    return 0;

}