#include <stdio.h>
#include <string.h>

// Define a structure to represent a product
struct Product {
    int id;
    char name[50];
    float price;
    int quantity;
};

// Function to add a new product to the inventory
void addProduct(struct Product inventory[], int *count) {
    if (*count < 100) { // Assuming a maximum of 100 products
        struct Product newProduct;
        newProduct.id = *count + 1;

        printf("Enter product name: ");
        scanf("%s", newProduct.name);

        printf("Enter product price: ");
        scanf("%f", &newProduct.price);

        printf("Enter product quantity: ");
        scanf("%d", &newProduct.quantity);

        inventory[*count] = newProduct;
        (*count)++;

        printf("Product added successfully.\n");
    } else {
        printf("Inventory is full. Cannot add more products.\n");
    }
}

// Function to update a product's information
void updateProduct(struct Product inventory[], int count, int productId) {
    for (int i = 0; i < count; i++) {
        if (inventory[i].id == productId) {
            printf("Enter new product name: ");
            scanf("%s", inventory[i].name);

            printf("Enter new product price: ");
            scanf("%f", &inventory[i].price);

            printf("Enter new product quantity: ");
            scanf("%d", &inventory[i].quantity);

            printf("Product updated successfully.\n");
            return;
        }
    }
    printf("Product with ID %d not found.\n", productId);
}

// Function to delete a product from the inventory
void deleteProduct(struct Product inventory[], int *count, int productId) {
    for (int i = 0; i < *count; i++) {
        if (inventory[i].id == productId) {
            // Move the last product to the deleted product's position
            inventory[i] = inventory[*count - 1];
            (*count)--;
            printf("Product deleted successfully.\n");
            return;
        }
    }
    printf("Product with ID %d not found.\n", productId);
}

// Function to search for a product by name
void searchProduct(struct Product inventory[], int count, char searchName[]) {
    printf("Search results:\n");
    for (int i = 0; i < count; i++) {
        if (strcmp(inventory[i].name, searchName) == 0) {
            printf("ID: %d, Name: %s, Price: %.2f, Quantity: %d\n",
                   inventory[i].id, inventory[i].name, inventory[i].price, inventory[i].quantity);
        }
    }
}

int main() {
    struct Product inventory[100]; // Array to store products
    int count = 0; // Number of products in the inventory

    int choice;
    while (1) {
        printf("\nInventory Management System\n");
        printf("1. Add Product\n");
        printf("2. Update Product\n");
        printf("3. Delete Product\n");
        printf("4. Search Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct(inventory, &count);
                break;
            case 2:
                if (count > 0) {
                    int productId;
                    printf("Enter product ID to update: ");
                    scanf("%d", &productId);
                    updateProduct(inventory, count, productId);
                } else {
                    printf("Inventory is empty. Cannot update.\n");
                }
                break;
            case 3:
                if (count > 0) {
                    int productId;
                    printf("Enter product ID to delete: ");
                    scanf("%d", &productId);
                    deleteProduct(inventory, &count, productId);
                } else {
                    printf("Inventory is empty. Cannot delete.\n");
                }
                break;
            case 4:
                if (count > 0) {
                    char searchName[50];
                    printf("Enter product name to search: ");
                    scanf("%s", searchName);
                    searchProduct(inventory, count, searchName);
                } else {
                    printf("Inventory is empty. Cannot search.\n");
                }
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
