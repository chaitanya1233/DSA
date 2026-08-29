#include <stdio.h>

int main()
{

    int x = 1234;

    int sum = 0;
    while(x>0)
    {
        // Extract digit 
        int digit  = x % 10;
        // Add it to sum 
        sum += digit;
        // Remove last digit
        x = x /10;
    }

    printf("Sum of digits is:%d",sum);

    return 0;
}