#include <stdio.h>
#include <stdlib.h>

// Define a dynamic array structure
struct DynamicArray {
    int *data;
    int size;
    int capacity;
};

// Initialize a dynamic array
void initDynamicArray(struct DynamicArray *arr, int initialCapacity) {
    arr->data = (int *)malloc(initialCapacity * sizeof(int));
    if (arr->data == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }
    arr->size = 0;
    arr->capacity = initialCapacity;
}

// Resize a dynamic array to double its capacity
void resizeDynamicArray(struct DynamicArray *arr) {
    int newCapacity = arr->capacity * 2;
    int *newData = (int *)realloc(arr->data, newCapacity * sizeof(int));
    if (newData == NULL) {
        perror("Memory reallocation failed");
        exit(1);
    }
    arr->data = newData;
    arr->capacity = newCapacity;
}

// Add an element to the end of the dynamic array
void pushBack(struct DynamicArray *arr, int element) {
    if (arr->size == arr->capacity) {
        resizeDynamicArray(arr);
    }
    arr->data[arr->size++] = element;
}

// Free the memory used by the dynamic array
void freeDynamicArray(struct DynamicArray *arr) {
    free(arr->data);
    arr->size = 0;
    arr->capacity = 0;
}

int main() {
    struct DynamicArray dynArr;
    initDynamicArray(&dynArr, 5); // Initialize with an initial capacity of 5

    printf("Adding elements to the dynamic array:\n");
    for (int i = 1; i <= 10; i++) {
        pushBack(&dynArr, i * 10);
        printf("Size: %d, Capacity: %d\n", dynArr.size, dynArr.capacity);
    }

    printf("Dynamic Array elements: ");
    for (int i = 0; i < dynArr.size; i++) {
        printf("%d ", dynArr.data[i]);
    }
    printf("\n");

    freeDynamicArray(&dynArr);

    return 0;
}
