#include <stdio.h>

void stringCopy(char* dest, const char* src) {
    // Copy characters until null terminator is found
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    // Add null terminator to destination string
    dest[i] = '\0';
}

int main() {
    char source[] = "Hello World!";
    char destination[50];  // Make sure destination has enough space
    
    printf("Original string: %s\n", source);
    
    stringCopy(destination, source);
    
    printf("Copied string: %s\n", destination);
    
    return 0;
}