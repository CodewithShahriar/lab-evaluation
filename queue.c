#include <stdio.h>
#define SIZE 10 // Macro definition for the maximum size of the queue

// Global variable declaration
int queue[SIZE];
int front = -1, rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return (front == -1 && rear == -1);
}

// Function to check if the queue is full
int isFull() {
    return rear == SIZE - 1;
}

// Function to add a new element
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is already full. %d cannot be inserted.\n", value);
    } else if (isEmpty()) { // If the queue is empty, initialize front and rear
        front = rear = 0;
        queue[rear] = value;
        printf("%d added to the queue.\n", value);
    } else {
        rear++;
        queue[rear] = value;
        printf("%d added to the queue.\n", value);
    }
}

// Function to delete the front-most element from the queue
void dequeue() {
    int val;
    if (isEmpty()) {
        printf("Queue is already empty.\n");
    } else if (front == rear) { // If there’s only one element left
        val = queue[front];
        front = rear = -1; // Reset front and rear to empty state
        printf("%d is deleted from the queue.\n", val);
    } else {
        val = queue[front];
        front++;
        printf("%d is deleted from the queue.\n", val);
    }
}

// Function to find the front-most element of the queue
void peak() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("%d is the front-most element of the queue.\n", queue[front]);
    }
}

// Function to display all elements in the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Insert new element\n");
        printf("2. Delete element\n");
        printf("3. Show front element\n");
        printf("4. Display all elements\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peak();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
}
