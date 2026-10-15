#include <stdio.h>
#include <stdlib.h>

void insertion_at_position(int *arr, int n, int value, int position) {
    if (position < 0 || position > n) {
        printf("Invalid position. Please enter a position between 0 and %d.\n", n);
        return;
    }
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];  
    }
    arr[position] = value;  
    printf("The array after insertion at position %d is:\n", position);
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc((n + 1) * sizeof(int)); 
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int value, position;
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    printf("Enter the position to insert the value (0 to %d): ", n);
    scanf("%d", &position);

    insertion_at_position(arr, n, value, position);
    
    free(arr);
    return 0;
}