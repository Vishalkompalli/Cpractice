//Write a function to find the middle element of an array using pointers without using array indexing.
// Used dynamic memory allocation to input the array from the user BECAUSE we're using Variable Lengthed Array(VLA)

#include <stdio.h>
#include <stdlib.h>

int *find_middle(int *arr, int size)
{
    //handles the empty or single element cases
    if(size <=1)
    {
        return arr;
    }
    //calculates the middle index using pointer arithmetic
    int *middle = arr + (size)/2;
    return middle;

}

int main()
{
    //int arr[] = {1,2,3,4,5};
    int n;
    printf("Enter the total number of elements");
    scanf("%d",&n);
    //Dynamically allocating the memory for an array
    int *arr = (int *)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation has failed\n");
        return 1;
    }
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    // int size = sizeof(arr)/sizeof(arr[0]);

    int *middle_element = find_middle(arr,n);
    printf("Middle element is %d\n",*middle_element);
    //free the allocated memory
    free(arr);
    return 0; 
}

