/*
question1:

Delete all lowercase ‘d’ from a string, e.g. 

input the string “abcdabcd” and output “abcabc”. 

Note that the string is a C string, which means it is an array of characters ending with ‘\0’.
*/


#include <iostream>

void deleteLowercaseD(char* str) {
    if (str == nullptr) {
        return;
    }
    
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != 'd') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "abcdabcd";
    std::cout << "Before deletion: " << str << std::endl;
    
    deleteLowercaseD(str);
    std::cout << "After deletion: " << str << std::endl;
    
    return 0;
}