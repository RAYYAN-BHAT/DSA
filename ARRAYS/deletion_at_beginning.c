#include <stdio.h>
#include <stdlib.h>

void deletion_at_beginning(int *arr, int n) {
    if (n <= 0) {
        printf("Array is empty. Cannot delete any element.\n");
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];  
    }
    printf("The array after deletion at the beginning is:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int)); 
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    deletion_at_beginning(arr, n);
    
    free(arr);
    return 0;
}