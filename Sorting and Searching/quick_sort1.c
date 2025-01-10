#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int, int);

void quick_sort(int arr[], int low, int high)
{
    if (low < high) 
    {
        int pivot_index = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
    }
}
int partition(int arr[], int low, int high) 
{
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;        // Index of the smaller element

    for (int j = low; j < high; j++) 
    {
        if (arr[j] < pivot) 
        {    // Swap if current element is smaller than pivot
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
        }
    }

    // Swap the pivot element with the element at index (i + 1)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  // Return the partition index
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
    quick_sort(arr,0,n-1);//Sorting fucntion call
    printf("Quick sorted array is: ");
    printarray(arr,n);//Print function call
    free(arr);
    return 0;

}