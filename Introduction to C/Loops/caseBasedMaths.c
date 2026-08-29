#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x,y;
    char op;
    printf("Enter both oprands:");
    scanf("%d %d",&x,&y);
    printf("Choose Oprator to perform opration:");
    scanf(" %c",&op);

    switch(op)
    {
        case '+':
            printf("Addition is:%d\n",x+y);
            break;
        case '-':
            printf("Subtraction is:%d\n",x-y);
            break;
        case '*':
            printf("Multiplication is:%d\n",x*y);
            break;
        case '/':
            printf("Division is:%d\n",x/y);
            break;
        default:
            printf("We cannot perform  opration!");
    }

    return 0;
}