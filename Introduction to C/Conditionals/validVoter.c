#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age;
    printf("enter your age:");
    scanf("%d",&age);
    printf("Your age is:%d\n",age);

    if(age>=18)
    {
        printf("Valid Voter!");
    }
    else{
        printf("Not valid Voter!");
    }   
    
    return 0;

}