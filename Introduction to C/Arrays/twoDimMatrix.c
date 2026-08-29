#include <stdio.h>
#include <stdlib.h>

int main()
{

    int row,col;
    printf("Enter rows:");
    scanf("%d",&row);

    printf("Enter columns:");
    scanf("%d",&col);

    int arr[row][col];

    printf("Enter elements of the matrix:");

    for(int i = 0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    // Print the elements of the array
    for(int i = 0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Element at index %d,%d is:%d\n",i,j,arr[i][j]);
        }
    }

    printf("Matrix Representation is:\n");
    for(int i = 0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}