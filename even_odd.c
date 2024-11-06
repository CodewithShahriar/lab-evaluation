#include <stdio.h>

// Function to separate odd and even elements
void separateOddEven(int arr[], int n, int odd[], int *oddCount, int even[], int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[(*evenCount)++] = arr[i];
        } else {
            odd[(*oddCount)++] = arr[i];
        }
    }
}

// Function to print elements of an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array to store the input values

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int odd[n], even[n]; // Arrays to store odd and even elements
    int oddCount = 0, evenCount = 0;

    // Separate odd and even elements
    separateOddEven(arr, n, odd, &oddCount, even, &evenCount);

    // Print even elements
    printf("Even elements are: ");
    printArray(even, evenCount);

    // Print odd elements
    printf("Odd elements are: ");
    printArray(odd, oddCount);

    return 0;
}
