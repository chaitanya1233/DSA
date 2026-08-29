#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    char ch[100];

    printf("Enter your string:");
    fgets(ch,sizeof(ch),stdin);
    int flag = 0;

    // Remove newline if present
    ch[strcspn(ch, "\n")] = '\0';
    
    for(int i = 0;i < (strlen(ch))/2;i++)
    {
        if(ch[i] != ch[strlen(ch)-i-1])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("String is not palidrome!");
    }
    else

    {
        printf("String is palindrome!");
    }

    return 0;
}