#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    char name[] = "Chaitanya";

    printf("Enter your age:");
    scanf("%d",&age);

    printf("Your age is:%d\n",age);

    printf("%s",name);

    double pi = 3.1456334;
    printf("%.2f",pi);

    

    return 0;
}