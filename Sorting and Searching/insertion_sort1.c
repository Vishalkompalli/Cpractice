#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than `key`
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    int *arr;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    // int arr[n];
    printf("Enter %d elements: ",n);
    arr = (int*)malloc(sizeof(int)*n);
    {
        if(arr == NULL)
        {
            printf("Memory Allocation failed\n");
            return 1;
        }
        
    }
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    }
    insertion_sort(arr,n);
    printf("Insertion sorted array is: ");
    printarray(arr,n);
    free(arr);
    return 0;

}