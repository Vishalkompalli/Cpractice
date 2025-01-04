#include <stdio.h>

// Function to sort an array in ascending order
void sortAscending(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], negatives[n], positives[n];
    int negCount = 0, posCount = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) 
        {
            negatives[negCount++] = arr[i]; // Store negative numbers
        } else 
        {
            positives[posCount++] = arr[i]; // Store positive numbers
        }
    }

    // Sort negatives and positives in ascending order
    sortAscending(negatives, negCount);
    sortAscending(positives, posCount);

    // Print sorted negatives
    printf("Sorted array:\n");
    for (int i = 0; i < negCount; i++) {
        printf("%d ", negatives[i]);
    }

    // Print sorted positives
    for (int i = 0; i < posCount; i++) {
        printf("%d ", positives[i]);
    }
    printf("\n");

    return 0;
}
