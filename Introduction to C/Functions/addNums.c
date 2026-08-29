#include <stdio.h>
#include <stdlib.h>

double add(int x, int y)
{
    return x + y;
}

int main()
{
    int x,y;

    printf("Enter values for x and y:");
    scanf("%d %d",&x,&y);

    double sum = add(x,y);
    printf("Sum is:%d",sum);





    return 0;
}