#include <iostream>
#include <vector>

using namespace std;
int nthUglyNumber(int n);

int main(){
    int result = nthUglyNumber(1500);
    cout << "The 1500'th ugly number is "<<result<<"."<< endl;
}
int nthUglyNumber(int n) {
        int a = 0, b = 0, c = 0;
        vector<int> ans(n, 1);
        for (int i = 1; i < n; i++) {
            int cur = min(ans[a] * 2, min(ans[b] * 3, ans[c] * 5));
            if (ans[a] * 2 == cur) a++;
            if (ans[b] * 3 == cur) b++;
            if (ans[c] * 5 == cur) c++;
            ans[i] = cur;
        }
        return ans[n - 1];
}