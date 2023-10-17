#include<iostream> 
using namespace std;

void main() {
    char grade = 'B';

    switch (grade) {
    case 'A':
        cout << "90~100" << endl;
        break;
    case 'B':
        cout << "80~89" << endl;
        //break;
    case 'C':
        cout << "70~79" << endl;
        break;
    case 'D':
        cout << "60~69" << endl;
        break;
    case 'F':
        cout << "Under 60" << endl;
        break;
    default:
        cout << "Input error!" << endl;
        //break;
    }
}
