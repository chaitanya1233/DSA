#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Take inpit of the size of the elements of the array.
    // int k;
    // printf("Enter size of the array:");
    // scanf("%d",&k);

    int arr[100];


    // Array declration with size of the array 
    // int arr[k];

    int k = 4; // I acquired only 4 blocks of the array.
    // What will be the size of the array.? 

    // --> It will be 4 or 100.

    // Take unput of the array element
    printf("Enter elements of array:");

    for(int i =0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Safely chedk for the size of the array.
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of the array is:%d",size);

    
    return 0;
}