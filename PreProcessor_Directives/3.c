#include <stdio.h>

#define DEBUG 1 // Define a macro for conditional compilation

int main() {
    #ifdef DEBUG
    // This code block will be included because DEBUG is defined
    printf("Debugging information: ...\n");
    #else
    // This code block will be included if DEBUG is not defined
    printf("Release version: ...\n");
    #endif

    return 0;
}
