#include <stdio.h>

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

// Define a structure representing a data item
struct DataItem {
    enum DataType dataType;
    union Variant value;
};

int main() {
    int numItems;
    printf("Enter the number of data items: ");
    scanf("%d", &numItems);

    // Create an array of DataItem structures
    struct DataItem items[numItems];

    // Input values for different data items
    for (int i = 0; i < numItems; i++) {
        printf("Select data type (0 for int, 1 for float, 2 for string) for item %d: ", i + 1);
        scanf("%d", &items[i].dataType);

        switch (items[i].dataType) {
            case INTEGER:
                printf("Enter an integer value: ");
                scanf("%d", &items[i].value.intValue);
                break;
            case FLOATING_POINT:
                printf("Enter a floating-point value: ");
                scanf("%f", &items[i].value.floatValue);
                break;
            case STRING:
                printf("Enter a string value: ");
                scanf("%s", items[i].value.stringValue);
                break;
            default:
                printf("Invalid data type selection.\n");
                return 1;
        }
    }

    // Display values for each data item
    printf("Data Items:\n");
    for (int i = 0; i < numItems; i++) {
        printf("Item %d\n", i + 1);

        switch (items[i].dataType) {
            case INTEGER:
                printf("Integer Value: %d\n", items[i].value.intValue);
                break;
            case FLOATING_POINT:
                printf("Floating-Point Value: %.2f\n", items[i].value.floatValue);
                break;
            case STRING:
                printf("String Value: %s\n", items[i].value.stringValue);
                break;
        }

        printf("\n");
    }

    return 0;
}
