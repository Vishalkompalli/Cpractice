//Dynamic allocation of a 2D Array using malloc and double pointer


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int rows,cols;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    printf("Enter the number of columns");
    scanf("%d",&cols);

    //Allocate memory for the rows
    int **arr = (int**)malloc(rows * sizeof(int*));

    //Allocate memory for each row and filling it with 1s FOR FUN
    for(int i=0;i< rows;++i)
    {
        arr[i] = (int*)malloc(cols * sizeof(int));
        for(int j=0;j<cols;++j)
        {
            arr[i][j] = 1;
        }
    }
    //Displaying the array
    printf("The array is:\n");
    for(int i=0;i<rows;++i)
    {
        for (int j=0;j<cols;++j)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    

    for (int i=0;i<rows;i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}