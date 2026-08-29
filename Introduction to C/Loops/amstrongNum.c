#include <stdio.h>

int main()
{

    int num;
    printf("Enter any numebr:");
    scanf("%d",&num);

    int count  = 0;
    while(num!=0)
    {
        num = num /10;
        count += 1;
    }
    
    return 0;

}