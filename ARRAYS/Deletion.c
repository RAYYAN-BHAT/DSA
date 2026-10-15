#include <stdio.h>
#include <stdlib.h>

void delete_element(int *arr, int n, int position) {
    if (position < 0 || position >= n) {
        printf("Invalid position. Please enter a position between 0 and %d.\n", n - 1);
        return;
    }
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("The array after deleting the element at index %d is:\n", position);
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index of the element to delete: ");
    int position;
    scanf("%d", &position);
    delete_element(arr, n, position);

    free(arr);
    return 0;
}