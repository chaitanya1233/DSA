#include <stdio.h>

int main()
{

    int year;
    printf("Enter your year:");
    scanf("%d",&year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Year is leap!");
    }
    else
    {
        printf("Year is not leap!");
    }
    return 0;
}