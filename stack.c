#include<stdio.h> 
#include<stdlib.h> 

#define SIZE 10 
int stack[SIZE]; 
int top = -1; 

// Function to check if the stack is empty or not 
int isEmpty() { 
    return top == -1; 
} 

// Function to check if the stack is full or not 
int isFull() { 
    return top == SIZE - 1; 
} 

// Function to insert new element 
void push(int value) { 
    if (isFull()) { 
        printf("Stack Overflow! Stack is already full\n"); 
    } else { 
        top++; 
        stack[top] = value; 
        printf("%d added to the stack\n", value); 
    } 
} 

// Function to delete an element 
void pop() { 
    if (isEmpty()) { 
        printf("Stack Underflow! Stack is already empty.\n"); 
    } else { 
        int a = stack[top]; 
        printf("%d deleted from the stack.\n", a); 
        top--; 
    } 
} 

// Function to return the peak element 
void peak() { 
    if (isEmpty()) { 
        printf("The stack is empty. No element to return\n"); 
    } else { 
        printf("Top most element of the stack is %d\n", stack[top]); 
    } 
} 

// Function to print all elements in the stack
void print() { 
    if (isEmpty()) { 
        printf("Stack is empty. Nothing to show\n"); 
    } else { 
        int i; 
        printf("Stack elements: ");
        for (i = 0; i <= top; i++) { 
            printf("%d ", stack[i]); 
        } 
        printf("\n"); 
    } 
} 

int main() { 
    int value, choice; 
    while (1) { 
        printf("\nStack Operations:\n"); 
        printf("1. Push\n"); 
        printf("2. Pop\n"); 
        printf("3. Peak\n"); 
        printf("4. Display\n"); // Changed from "Show" to "Display"
        printf("5. Exit\n"); 
        printf("Enter your choice:\n"); 
        scanf("%d", &choice); 
        
        switch (choice) { 
            case 1: 
                printf("Enter a value:\n"); 
                scanf("%d", &value); 
                push(value); 
                break; 
            case 2: 
                pop(); 
                break; 
            case 3: 
                peak(); 
                break; 
            case 4: 
                print(); 
                break; 
            case 5: 
                exit(0); 
            default: 
                printf("Enter a valid input.\n"); 
        } 
    } 
}
