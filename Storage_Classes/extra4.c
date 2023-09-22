#include <stdio.h>
#include <stdbool.h>

#define MAX_TASKS 5

enum TaskState { READY, RUNNING, BLOCKED };

struct Task {
    int id;
    enum TaskState state;
};

struct Task tasks[MAX_TASKS];

// Function to initialize tasks
void initializeTasks() {
    for (int i = 0; i < MAX_TASKS; i++) {
        tasks[i].id = i + 1;
        tasks[i].state = READY;
    }
}

// Function to run a task
void runTask(int taskId) {
    if (taskId >= 1 && taskId <= MAX_TASKS) {
        tasks[taskId - 1].state = RUNNING;
        printf("Task %d is running.\n", taskId);
        tasks[taskId - 1].state = READY;
    } else {
        printf("Invalid task ID.\n");
    }
}

int main() {
    initializeTasks();
    runTask(2);
    runTask(4);

    return 0;
}
