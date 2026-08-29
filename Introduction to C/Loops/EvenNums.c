#include <stdio.h>

int main()
{

    // print all the even numbers from the 10 to 40
    for(int i= 10;i<40;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }  
    return 0;
}