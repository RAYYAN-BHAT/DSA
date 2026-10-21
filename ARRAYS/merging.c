#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

static int compare_integers(const void *left, const void *right)
{
    int first = *(const int *)left;
    int second = *(const int *)right;
    return (first > second) - (first < second);
}

void merge_arrays(const int *first, int first_size,
                  const int *second, int second_size, int *merged)
{
    int total_size = first_size + second_size;

    for (int i = 0; i < first_size; i++) {
        merged[i] = first[i];
    }
    for (int i = 0; i < second_size; i++) {
        merged[first_size + i] = second[i];
    }

    if (total_size > 1) {
        qsort(merged, (size_t)total_size, sizeof(*merged), compare_integers);
    }
}

int main(void)
{
    int first_size;
    int second_size;

    printf("Enter the number of elements in the first array: ");
    if (scanf("%d", &first_size) != 1 || first_size < 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the number of elements in the second array: ");
    if (scanf("%d", &second_size) != 1 || second_size < 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    if (first_size > INT_MAX - second_size) {
        printf("The combined array is too large.\n");
        return 1;
    }

    int total_size = first_size + second_size;
    if ((size_t)total_size > SIZE_MAX / sizeof(int)) {
        printf("The combined array is too large.\n");
        return 1;
    }

    int *first = first_size > 0 ? malloc((size_t)first_size * sizeof(*first)) : NULL;
    int *second = second_size > 0 ? malloc((size_t)second_size * sizeof(*second)) : NULL;
    int *merged = total_size > 0 ? malloc((size_t)total_size * sizeof(*merged)) : NULL;

    if ((first_size > 0 && first == NULL) ||
        (second_size > 0 && second == NULL) ||
        (total_size > 0 && merged == NULL)) {
        printf("Memory allocation failed.\n");
        free(first);
        free(second);
        free(merged);
        return 1;
    }

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < first_size; i++) {
        if (scanf("%d", &first[i]) != 1) {
            printf("Invalid element.\n");
            free(first);
            free(second);
            free(merged);
            return 1;
        }
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < second_size; i++) {
        if (scanf("%d", &second[i]) != 1) {
            printf("Invalid element.\n");
            free(first);
            free(second);
            free(merged);
            return 1;
        }
    }

    merge_arrays(first, first_size, second, second_size, merged);

    printf("Merged array in sorted order:\n");
    for (int i = 0; i < total_size; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    free(first);
    free(second);
    free(merged);
    return 0;
}
