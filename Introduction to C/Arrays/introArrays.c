#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define simple array if size k 
    int k;
    printf("Enter size of the array:");
    scanf("%d",&k);

    int arr[k];

    // Taking input of the array element 
    printf("Enter %d elements of the array:",k);

    for(int i = 0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Following are elements of the array:");
    for(int i =0;i<k;i++)
    {
        printf("%d,",arr[i]);
    }
    
    
    return 0;
}