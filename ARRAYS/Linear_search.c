#include <stdio.h>
#include <stdlib.h>

void linear_search(int *arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            return;
        }
    }
    printf("Element %d not found in the array\n", target);
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
    int target;
    printf("Enter the element to search for: ");
    scanf("%d", &target);
    linear_search(arr, n, target);
    free(arr);
    return 0;


}
