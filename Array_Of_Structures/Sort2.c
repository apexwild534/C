#include <stdio.h>
#include <string.h>

// Define a structure to represent a product
struct Product {
    char name[50];
    float price;
    int quantity;
};

// Function to compare products based on price for sorting
int compareByPrice(const void *a, const void *b) {
    return ((struct Product *)a)->price - ((struct Product *)b)->price;
}

// Function to compare products based on name for sorting
int compareByName(const void *a, const void *b) {
    return strcmp(((struct Product *)a)->name, ((struct Product *)b)->name);
}

int main() {
    struct Product products[5]; // Assuming a maximum of 5 products

    // Input product details
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Product %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", products[i].name);
        printf("Price: ");
        scanf("%f", &products[i].price);
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);
    }

    // Sort products based on price
    qsort(products, 5, sizeof(struct Product), compareByPrice);

    // Display products sorted by price
    printf("\nProducts Sorted by Price:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", products[i].name);
        printf("Price: %.2f\n", products[i].price);
        printf("Quantity: %d\n", products[i].quantity);
        printf("\n");
    }

    // Sort products based on name
    qsort(products, 5, sizeof(struct Product), compareByName);

    // Display products sorted by name
    printf("\nProducts Sorted by Name:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", products[i].name);
        printf("Price: %.2f\n", products[i].price);
        printf("Quantity: %d\n", products[i].quantity);
        printf("\n");
    }

    return 0;
}
