#include <stdio.h>

// Define a macro
#define MAX_VALUE 100

int main() {
    printf("MAX_VALUE before undefine: %d\n", MAX_VALUE);

    // Undefine the macro
    #undef MAX_VALUE

    #ifdef MAX_VALUE
    printf("MAX_VALUE after undefine: %d\n", MAX_VALUE);
    #else
    printf("MAX_VALUE is undefined.\n");
    #endif

    return 0;
}
