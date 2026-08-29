#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100];

    printf("Enter your string:");

    // what if i wana take input of the full string with  the space 
    fgets(ch,sizeof(ch),stdin);
    printf("Name of the string is: %s\n", ch);
    
    return 0;
}