#include <iostream>
#include <string>
using namespace std;

void main() {
    try {
        string s = "bye";
        cout << s.at(4);
        //cout << s[4];
    }
    catch (out_of_range& e) {
        cerr << e.what() << endl;
    }

    cout << "hello" << endl;
}
