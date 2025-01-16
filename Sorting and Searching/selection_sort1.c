#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int n)
{
    int min, temp=0,i=0;
    for(i = 0;i < n-1;i++)
    {
        min = i;//initially, 1st element is the minimum
        for(int j=i+1; j<n;j++)
        {
            if(arr[j] < arr[min])
            {
                min  = j;
            }

            temp = arr[i];//swapping i(th) and minimum elements
            arr [i] = arr[min];
            arr[min] = temp;
        }
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
    selection_sort(arr,n);
    printf("Selection sorted array is: ");
    printarray(arr,n);
    free(arr);
    return 0;

}