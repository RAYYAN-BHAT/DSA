#include <stdio.h>

int binary_s(const int arr[], int left, int right, int target)
{
    if (left > right) {
        return -1;
    }

    int middle = left + (right - left) / 2;

    if (arr[middle] == target) {
        return middle;
    }

    if (target < arr[middle]) {
        return binary_s(arr, left, middle - 1, target);
    }

    return binary_s(arr, middle + 1, right, target);
}

int main(void)
{
    int arr[100];
    int size;
    int target;

    printf("Enter the number of sorted elements (1-100): ");
    if (scanf("%d", &size) != 1 || size < 1 || size > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements in ascending order: ", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the value to search for: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int index = binary_s(arr, 0, size - 1, target);
    if (index == -1) {
        printf("%d was not found.\n", target);
    } else {
        printf("%d was found at index %d.\n", target, index);
    }

    return 0;
}
