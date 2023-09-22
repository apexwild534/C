#include <stdio.h>
#include <string.h>

void reverseArray(char arr[], int length) {
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        // Swap characters at start and end positions
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";
    int length = strlen(str);
    
    printf("Original string: %s\n", str);
    
    reverseArray(str, length);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
