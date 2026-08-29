#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,y;

    printf("Enter value for x and :");

    scanf("%d %d",&x,&y);

    printf("x:%d\n",x);
    printf("y:%d\n",y);

    printf("sum:%d\n",x+y);
    printf("Difference:%d\n",x-y);
    printf("Multiplication:%d\n",x*y);
    printf("Division:%d\n",x/y);
    printf("Modulus:%d\n",x%y);

    return 0;
}