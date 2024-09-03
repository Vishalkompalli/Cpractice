
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int N,S;
    int *arr;
    printf("Enter the values of N and S");
    scanf("%d %d",&N,&S);
    arr = (int*)malloc(N*sizeof(int));
    printf("Enter the elements of the array");
    for(int i=1;i<N;i++)
    {
        scanf("%d",&arr[i]);// to fill the elements in the array
    }

    for(int j=1;j<N;j++)
    {
        for(int k=j+1;k<N;k++)
        {
            if (arr[j] + arr[k] == S)
            {
                printf("%d %d\n",j,k);
            } 

        }

    }
    free(arr);

    return 0;
}