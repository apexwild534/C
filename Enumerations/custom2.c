#include <stdio.h>

// Define an enumeration representing error codes
enum ErrorCodes {
    Success, Failure, InvalidInput
};

// Function that returns an error code
enum ErrorCodes performOperation() {
    // Simulate an operation here
    // Return appropriate error code
    return Success;
}

int main() {
    enum ErrorCodes errorCode = performOperation();

    printf("Operation result: ");
    switch (errorCode) {
        case Success:
            printf("Success\n");
            break;
        case Failure:
            printf("Failure\n");
            break;
        case InvalidInput:
            printf("Invalid Input\n");
            break;
    }

    return 0;
}
