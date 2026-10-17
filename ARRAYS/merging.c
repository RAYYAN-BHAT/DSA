#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of 1st array: ");
    scanf("%d", &n);
    int *arr1 = (int * ) malloc(n*sizeof(int));
    if(arr1 == NULL)
       {
           printf("Memory allocation failed.\n");
           return -1;

       }
       printf("Enter the %d elements of the 1st array: ", n);
    for(int i = 0;i<n;i++) scanf("%d", &arr1[i]);

     int m;
    printf("Enter size of 2nd array: ");
    scanf("%d", &m);
    int *arr2 = (int * ) malloc(n*sizeof(int));
    if(arr2 == NULL)
       {
           printf("Memory allocation failed.\n");
           return -1;

       }
       printf("Enter the %d elements of the 2nd array: ", m);
    for(int i = 0;i<m;i++) scanf("%d", &arr2[i]);

    return 0;



}
