#include <stdio.h>

int main()
{

    int n;
    printf("Which table you wana print:");
    scanf("%d",&n);

    for(int i = 1;i<=10;i++)
    {
        printf("%d ",n*i);
    }
    return 0;
}