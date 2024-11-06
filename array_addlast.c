#include <stdio.h>

#define MAX_SIZE 100  // Define a maximum size for the array
int a[MAX_SIZE] = {10, 20, 30, 40, 50, 60, 70};  // Array with initial elements
int size = 7;  // Initial size of the array (number of elements)

void AddtoLast(int n) {
    if (size < MAX_SIZE) {
        a[size] = n;  // Add the new element at the end
        size++;  // Increment size to reflect the new element
        printf("After Operation (Add to Last): \n");
        for (int i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    } else {
        printf("Array is full! Cannot add more elements.\n");
    }
}

void AddtoPos(int n, int p) {
    if (p < 1 || p > size + 1) {
        printf("Invalid position.\n");
        return;
    }
    if (size < MAX_SIZE) {
        size++;  // Increase size to make room for the new element
        for (int i = size - 1; i >= p; i--) {
            a[i] = a[i - 1];  // Shift elements to the right
        }
        a[p - 1] = n;  // Insert the new element at the specified position
        printf("After Operation (Add to Position): \n");
        for (int i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    } else {
        printf("Array is full! Cannot add more elements.\n");
    }
}

void DelfromLast() {
    if (size > 0) {
        size--;  // Decrease size
        printf("After Operation (Delete from Last): \n");
        for (int i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    } else {
        printf("Array is empty! Cannot delete from last.\n");
    }
}

void DelfromPos(int p) {
    if (p < 1 || p > size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = p - 1; i < size - 1; i++) {
        a[i] = a[i + 1];  // Shift elements to the left
    }
    size--;  // Decrease size
    printf("After Operation (Delete from Position): \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    // Display the array before any operation
    printf("Before Operation: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Test the functions
    AddtoLast(1010);  // Adding 1010 at the end of the array
    // AddtoPos(1010, 5);  // Uncomment to add 1010 at position 5
    // DelfromPos(5);      // Uncomment to delete element at position 5
    // DelfromLast();      // Uncomment to delete the last element

    return 0;
}
