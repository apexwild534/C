#include <stdio.h>
#include <stdbool.h>

#define MEMORY_SIZE 100
#define BLOCK_SIZE 10

bool memory[MEMORY_SIZE] = {false}; // Memory blocks; false means block is free

// Function to allocate memory block
int allocateMemory() {
    for (int i = 0; i < MEMORY_SIZE; i++) {
        if (!memory[i]) {
            for (int j = 0; j < BLOCK_SIZE; j++) {
                memory[i + j] = true;
            }
            return i;
        }
    }
    return -1; // No free block found
}

// Function to deallocate memory block
void deallocateMemory(int blockIndex) {
    for (int i = blockIndex; i < blockIndex + BLOCK_SIZE; i++) {
        memory[i] = false;
    }
}

int main() {
    int allocatedBlock = allocateMemory();
    if (allocatedBlock != -1) {
        printf("Allocated memory block starting at index %d\n", allocatedBlock);
        deallocateMemory(allocatedBlock);
        printf("Deallocated memory block starting at index %d\n", allocatedBlock);
    } else {
        printf("No free memory block available.\n");
    }

    return 0;
}
