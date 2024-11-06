// 1. Write a C program that takes an array of integers (can have duplicate values) as input (e.g. Arr_1) and
// a. Find the difference between the maximum and minimum value of the array.
// b. Calculate the sum and average of all the elements.
// c. Reverse the array (e.g. Arr_1), store the reversed array in another array (e.g. Arr_2), and insert a new value in the reversed array (e.g. Arr_2) at the mentioned position.
// d. Find the frequency of each integer of the array.



#include <stdio.h>

#define SIZE 100

// Function to find the maximum and minimum values in the array
void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}

// Function to calculate the sum and average of the array
void findSumAndAverage(int arr[], int n, int *sum, float *average) {
    *sum = 0;
    for (int i = 0; i < n; i++) {
        *sum += arr[i];
    }
    *average = (float)(*sum) / n;
}

// Function to reverse the array and store it in another array
void reverseArray(int arr[], int n, int reversed[]) {
    for (int i = 0; i < n; i++) {
        reversed[i] = arr[n - 1 - i];
    }
}

// Function to insert a value at a specific position in the reversed array
void insertInArray(int arr[], int *n, int value, int position) {
    if (position < 0 || position > *n) {
        printf("Invalid position\n");
        return;
    }
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*n)++;
}

// Function to find the frequency of each element in the array
void findFrequency(int arr[], int n) {
    int freq[SIZE] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    printf("Frequency of each element:\n");
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] != 0) {
            printf("%d: %d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0; // Set frequency to 0 after printing to avoid duplicate entries
        }
    }
}

int main() {
    int arr[SIZE], reversed[SIZE];
    int n, max, min, sum, newValue, position;
    float average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // a. Find the difference between the maximum and minimum value of the array
    findMaxMin(arr, n, &max, &min);
    printf("Difference between max and min values: %d\n", max - min);

    // b. Calculate the sum and average of all elements
    findSumAndAverage(arr, n, &sum, &average);
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

    // c. Reverse the array and insert a new value in the reversed array at a specified position
    reverseArray(arr, n, reversed);

    printf("Enter the new value to insert in the reversed array: ");
    scanf("%d", &newValue);
    printf("Enter the position to insert the new value (0 to %d): ", n);
    scanf("%d", &position);

    insertInArray(reversed, &n, newValue, position);

    printf("Reversed array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    // d. Find the frequency of each integer in the original array
    findFrequency(arr, n);

    return 0;
}
