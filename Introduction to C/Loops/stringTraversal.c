#include <stdio.h>

int main()
{


    // For loops are best when you know all the conditions 

    
    char ch[100];

    printf("Enter your string:");

    fgets(ch,sizeof(ch),stdin);
    printf("Your string is :");
    for(int i = 0; ch[i]!= '\0';i++)    
    {
        if(ch[i] == '\0')
        {
            break;
        }
        printf("Index %d: %c\n",i,ch[i]);
    }
    return 0;
}