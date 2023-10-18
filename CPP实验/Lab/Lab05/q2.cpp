/*
question2:

Write a function that accepts a string, copies the string, and returns it. 

Requirement: use Pointer to do this.
*/

#include <iostream>
#include <cstring>

char* copy(const char* s) {
    int length = strlen(s);
    char* copy = new char[length + 1]; // +1 for null terminator
    
    // Copy each character using pointers
    const char* src = s;
    char* dest = copy;
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    
    *dest = '\0'; // Add null terminator to the copied string
    
    return copy;
}

int main() {
    const char* original = "Jinan University";
    
    char* copied = copy(original);
    
    std::cout << original << std::endl;
    std::cout <<  copied << std::endl;
    
    delete[] copied; // Remember to deallocate the copied string
    
    return 0;
}