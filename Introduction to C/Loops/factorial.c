#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter your numnber:");
    scanf("%d",&n);
    int fact = 1;
    for(int i = n;i!=0;i--)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %d",n,fact);
    return 0;
}