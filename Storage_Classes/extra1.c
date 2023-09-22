#include <stdio.h>

extern int externVar; // External variable declaration

int main() {
    auto int autoVar = 10;       // Automatic storage class
    static int staticVar = 20;   // Static storage class
    register int registerVar = 30; // Register storage class

    printf("autoVar: %d\n", autoVar);
    printf("staticVar: %d\n", staticVar);
    printf("registerVar: %d\n", registerVar);
    printf("externVar: %d\n", externVar);

    return 0;
}

int externVar = 40; // External variable definition
