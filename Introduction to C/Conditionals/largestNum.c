#include <stdio.h>
#include <stdlib.h>


int main()
{

    int x=10;
    int y = 20;
    int z = 3;

    if(x>y && x > z)
    {
        printf("X is greatest!");
    }
    if(y > x && y > z)
    {
        printf("Y is greatest!");
    }
    else
    {
        printf("Z is greatest!");
    }

    return 0;
}