#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, n, *a;

    // Input the total cash and number of people
    printf("Enter the total cash available: ");
    scanf("%d", &k);
    printf("Enter the number of people in line: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    a = (int*)malloc(sizeof(int) * n);
    if (a == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input the withdrawal amounts
    printf("Enter the withdrawal amounts for each person: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Process each person's withdrawal request
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k) // If the ATM has enough cash
        {
            printf("1"); // Withdrawal successful
            k -= a[i];  // Deduct the amount from the total cash
        }
        else
        {
            printf("0"); // Withdrawal unsuccessful
        }
    }

    // Free allocated memory
    free(a);

    return 0;
}
