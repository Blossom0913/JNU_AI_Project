/*
question1:

Write a recursive function (call itself) 

that inputs an integer N and returns the value of the element in the corresponding position of the Fibonacci sequence. 

The Fibonacci sequence is {0, 1, 1, 2, 3, 5, 8, 13, 21, ...}. 

For example, input 5 and output 3.
*/

#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 5;
    int result = fibonacci(n);
    std::cout << result << std::endl;

    return 0;
}