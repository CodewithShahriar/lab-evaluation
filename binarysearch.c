// Binary Search

// Problem: Implement Binary Search to find if a given number exists in a sorted array.



int BinarySearch(int l, int h, int t, int A[]) {
    int m;
    while(l <= h) {
        m = (l + h) / 2;
        if(A[m] == t)
            {
            return m;
        }
        else if(A[m] > t) {
            h = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return -1;
}

int main() {
    int A[50];
    int l, h, t, i, n, result;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter search element: ");
    scanf("%d", &t);

    l = 0;
    h = n - 1;

    result = BinarySearch(l, h, t, A);

    if(result == -1) {
        printf("Not found\n");
    } else {
        printf("Found at index %d\n", result);
    }

return 0;
}
