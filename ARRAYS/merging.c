#include <stdio.h>
#include <stdlib.h>


void mergeArrays(int *arr1, int n, int *arr2, int m, int *mergedArr)
{
    int i,j;
    for(i = 0; i < n; i++)
    {
        mergedArr[i] = arr1[i];
    }
    for(j = 0; j < m; j++,i++)
    {
        mergedArr[i] = arr2[j];
    }
}
int main()
{
    int n;
    printf("Enter no of elements of 1st array: ");
    scanf("%d", &n);
    int *arr1 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d of 1st array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    int m;
    printf("Enter no of elements of 2nd array: ");
    scanf("%d", &m);
    int *arr2 = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
    {
        printf("Enter element %d of 2nd array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int *mergedArr = (int *)malloc((n + m) * sizeof(int));
    mergeArrays(arr1, n, arr2, m, mergedArr);

    printf("Merged array: ");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(mergedArr);

    return 0;
}
