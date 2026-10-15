#include <stdio.h>
#include <stdlib.h> 

void insertion_at_end(int *arr, int n, int value) {
    arr[n] = value; // 
    printf("The array after insertion at the end is:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc((n + 1) * sizeof(int)); // 
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int value;
    printf("Enter the value to insert at the end: ");
    scanf("%d", &value);

    insertion_at_end(arr, n, value);
    
    free(arr);
    return 0;
}