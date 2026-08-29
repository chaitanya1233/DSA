#include <stdio.h>
#include <stdlib.h>

void greet(char name[],int age)
{
    printf("Your name is %s and you are %d years old!",name,age);
}

int main()
{
    int age;
    char name[100];

    printf("Enter your name:");
    fgets(name,sizeof(name),stdin);

    printf("Enter your age:");
    scanf("%d",&age);



    greet(name,age);
    return 0;
}