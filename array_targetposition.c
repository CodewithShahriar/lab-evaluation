#include <stdio.h>

#define SIZE 11  // Increased size to accommodate the new element

int main() {
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Existing array
    int n, p, size = 10;  // Current size of the array

    // Read the element to be inserted and the position
    printf("Enter the element to insert: ");
    scanf("%d", &n);
    printf("Enter the position to insert: ");
    scanf("%d", &p);

    // Validate the position
    if (p < 1 || p > size + 1) {
        printf("Invalid position! Please enter a valid position (1 to %d).\n", size + 1);
        return 1;  // Exit the program with an error code
    }

    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i >= p - 1; i--) {
        a[i + 1] = a[i];
    }

    // Insert the new element at the specified position
    a[p - 1] = n;
    size++;  // Increase the size after insertion

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
