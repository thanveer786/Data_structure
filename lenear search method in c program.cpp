#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the element if found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("%d found at index %d\n", key, result);
    } else {
        printf("%d not found in the array\n", key);
    }

    return 0;
}
