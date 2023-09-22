#include <stdio.h>

// Define an enumeration representing keyboard key codes
enum KeyCode {
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
    SPACE, ENTER, ESCAPE
};

// Function to simulate typing a key code
void typeKey(enum KeyCode key) {
    switch (key) {
        case A ... Z:
            printf("%c", 'A' + (int)key);
            break;
        case SPACE:
            printf(" ");
            break;
        case ENTER:
            printf("\n");
            break;
        case ESCAPE:
            printf(" [ESCAPE]\n");
            break;
        default:
            printf("[UNKNOWN]");
            break;
    }
}

int main() {
    enum KeyCode message[] = {H, E, L, L, O, SPACE, W, O, R, L, D, ENTER, ESCAPE};
    int messageLength = sizeof(message) / sizeof(enum KeyCode);

    printf("Simulating Typing:\n");
    for (int i = 0; i < messageLength; i++) {
        typeKey(message[i]);
    }

    return 0;
}
