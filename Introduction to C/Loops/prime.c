#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;
    int flag = 0;

    printf("Enter any number:");
    scanf("%d",&x);
    
    if(x<=1)
    {
       printf("%d is not prime number!",x);
    }   
    else{
            
        for(int i =2;i<x;i++)
        {
            if(x%i == 0)
            {
                flag = 1;
                break;
            }
        }

    }

    if(flag == 1)
    {
        printf("%d is not prime number!",x);
    }    
    else
    {
        printf("%d is a prime numnber!",x);
    }

    return 0;
}