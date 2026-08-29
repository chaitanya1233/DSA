#include <stdio.h>
#include <stdlib.h>


int sumArr(int arr[],int k)
{
    int sum = 0;
    for(int i =0;i<k;i++)
    {
        sum += arr[i];
    }
    return sum;

}

int avgArr(int arr[],int k)
{
    int sum = 0;
    for(int i = 0;i<k;i++)
    {
        sum+=arr[i];
    }

    return sum/k;
}
int main()
{
    int k;
    printf("Enter how much elements you wana enter in array:");
    scanf("%d",&k);

    int arr[k];

    printf("Enter elements of the array:");
    for(int i = 0;i<k;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int sum = sumArr(arr,k);
    int avg = avgArr(arr,k);

    printf("Sum of array elements:%d\n",sum);
    printf("Average of array elements:%d",avg);

    return 0;
}