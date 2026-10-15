#include <stdio.h>
#include <stdlib.h>

void deletion_at_end(int *arr, int n) {
    if (n <= 0) {
        printf("Array is empty. Cannot delete any element.\n");
        return;
    }
    printf("The array after deletion at the end is:\n");
    n--;
    for (int i = 0; i < n; i++) {
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

    deletion_at_end(arr, n);
    
    free(arr);
    return 0;
}