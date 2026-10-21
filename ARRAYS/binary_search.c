#include <stdio.h>
#include <stdlib.h>


int binary_search(int *arr,int n,int target)
{
    int left = 0;
    int right = n - 1;
    int middle;
    while(right>=left)
    {
        middle = left + (right - left)/2; // Instead of (left + right)/2 to avoid overflow
        if(target == arr[middle])
        {
            return middle;
        }
        else if(target>arr[middle])
        {
            left = middle + 1;
        }
        else if (target<arr[middle])
        {
            right = middle - 1;


        }

    }
    return -1;
}
int main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation failed!");
        return -1;
    }
    printf("Enter the elements of the sorted array: ");
    for(int i =0;i<n;i++) scanf("%d",&arr[i]);

    int target;
    printf("Enter the element you want to search: ");
    scanf("%d",&target);

    int result = binary_search(arr,n,target);
    if(result == -1)
    {
        printf("Element not found.");
    }
    else
    {
        printf("Element found at index %d",result);
    }
    free(arr);
    return 0;

}
