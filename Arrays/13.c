#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

struct Stack {
    int items[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

bool isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

bool isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, int item) {
    if (!isFull(stack)) {
        stack->items[++stack->top] = item;
    } else {
        printf("Stack overflow! Cannot push %d.\n", item);
    }
}

int pop(struct Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top--];
    } else {
        printf("Stack underflow! Cannot pop.\n");
        return -1; // Stack is empty
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("Popped item: %d\n", pop(&stack));
    printf("Popped item: %d\n", pop(&stack));
    printf("Popped item: %d\n", pop(&stack));
    printf("Popped item: %d\n", pop(&stack)); // Stack underflow

    return 0;
}
