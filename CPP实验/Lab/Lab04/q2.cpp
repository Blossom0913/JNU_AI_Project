/*
question2:

Check whether a string (in the form of an array of characters) is a palindrome, 

which means that the forward and reverse orders of it are the same, e.g., abcdgdcba. 

Requirement: use Pointer to do this.

*/


#include <iostream>
#include <cstring>

bool isPalindrome(char* s) {
    int length = strlen(s);
    char* start = s;
    char* end = s + length - 1;
    
    while (start < end) {
        // Ignore non-alphanumeric characters from the left side
        while (!isalnum(*start) && start < end) {
            start++;
        }
        
        // Ignore non-alphanumeric characters from the right side
        while (!isalnum(*end) && start < end) {
            end--;
        }
        
        // Compare the characters at the start and end pointers
        if (tolower(*start) != tolower(*end)) {
            return false;
        }
        
        // Move the pointers towards the center
        start++;
        end--;
    }
    
    return true;
}

int main() {
    char string[] = "abcdgdcba";
    
    if (isPalindrome(string)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    
    return 0;
}
