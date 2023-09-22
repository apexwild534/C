#include <stdio.h>
#include <string.h>

// Define an enumeration for data types
enum DataType {
    INTEGER,
    FLOATING_POINT,
    STRING
};

// Define a union representing a variant type
union Variant {
    int intValue;
    float floatValue;
    char stringValue[50];
};

int main() {
    union Variant value;
    enum DataType dataType;

    // Input data type from the user
    printf("Select data type (0 for int, 1 for float, 2 for string): ");
    scanf("%d", &dataType);

    // Based on the selected data type, input the corresponding value
    switch (dataType) {
        case INTEGER:
            printf("Enter an integer value: ");
            scanf("%d", &value.intValue);
            break;
        case FLOATING_POINT:
            printf("Enter a floating-point value: ");
            scanf("%f", &value.floatValue);
            break;
        case STRING:
            printf("Enter a string value: ");
            scanf("%s", value.stringValue);
            break;
        default:
            printf("Invalid data type selection.\n");
            return 1;
    }

    // Display the value based on its data type
    switch (dataType) {
        case INTEGER:
            printf("You entered an integer: %d\n", value.intValue);
            break;
        case FLOATING_POINT:
            printf("You entered a floating-point number: %.2f\n", value.floatValue);
            break;
        case STRING:
            printf("You entered a string: %s\n", value.stringValue);
            break;
    }

    return 0;
}
