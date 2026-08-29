#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    printf("Enter any natural number:");
    scanf("%d",&num);
    
    if(num > 0)
    {
        printf("Number is positive!");
    }
    else if(num == 0)
    {
        printf("Number is zero");
    }
    else
    {
        printf("Number is negative");
    }
    return 0;
}