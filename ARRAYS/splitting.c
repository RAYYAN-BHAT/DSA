#include <stdio.h>
#include <stdlib.h>


void splitArray(int *arr, int n, int index, int *arr1, int *arr2) {
    int i;
    for( i = 0; i < index; i++) {
        arr1[i] = arr[i];
    }
    for(int j = 0; j < n - index; j++,i++) {
        arr2[j] = arr[i];
    }
}
int main() {
    int n, i,index;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the index to split the array: ");
    scanf("%d", &index);

    int *arr1 = (int *)malloc(index * sizeof(int));
    int *arr2 = (int *)malloc((n - index) * sizeof(int));

    splitArray(arr, n, index, arr1, arr2);

    printf("First half: ");
    for(i = 0; i < index; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Second half: ");
    for(i = 0; i < n - index; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    free(arr);
    free(arr1);
    free(arr2);
    return 0;
}