#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n)
{
    int i,j, temp=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
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
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    }
    bubble_sort(arr,n);
    printf("Bubble sorted array is:");
    printarray(arr,n);
    free(arr);
    return 0;

}