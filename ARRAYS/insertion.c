#include <stdio.h>
#include <stdlib.h>


void insert(int *arr, int n, int element, int position) {
    if (position < 0 || position > n) {
        printf("Invalid position. Please enter a position between 0 and %d.\n", n);
        return;
    }
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    printf("The array after inserting %d at index %d is:\n", element, position);
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n, element;
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
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the index where you want to insert the element: ");
    int position;
    scanf("%d", &position);
    insert(arr,n,element,position);

    free(arr);
    return 0;
}