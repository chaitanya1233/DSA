#include <stdio.h>
#include <stdlib.h>


void maximum(int arr[],int k)
{
    int max = arr[0];
    for(int i = 1;i<k;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum element from array is:%d",max);
}
int main()
{
    int k = 5;
    int arr[k];
    
    printf("Enter elements of the array:");

    for(int i = 0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }
    maximum(arr,k);
    
    return 0;
}