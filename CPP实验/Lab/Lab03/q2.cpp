/*
question2:

Suppose there is an array of integers in ascending order. 

Input an integer N, and insert N into the corresponding position so that the array is still in ascending order. 

Otherwise, if N already exists, ignore the input N. Example:

Input {1, 2, 3, 5, 7, 9} and 8

Output {1, 2, 3, 5, 7, 8, 9}
*/

#include <iostream>

void insertInAscendingOrder(int arr[], int& size, int num) {
    int i;
    for (i = size - 1; i >= 0 && arr[i] > num; i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = num;
    size++;
}

int main() {
    int arr[] = {1, 2, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 8;

    insertInAscendingOrder(arr, size, num);

    
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}