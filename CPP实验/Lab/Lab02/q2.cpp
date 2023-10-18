/*
question2:

Find the second largest value in an array. 

For example, if you have the array {1, 4, 2, 3, 5}, which returns 4.
*/

#include <iostream>

int findSecondLargest(int arr[], int size) {
    int largest = arr[0]; // Initialize the largest element as the first element
    int secondLargest = INT_MIN; // Initialize the second largest as the minimum integer value

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {1, 4, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);
    std::cout << "The second largest value in the array is: " << secondLargest << std::endl;

    return 0;
}