#include <bits/stdc++.h>

using namespace std;

int isArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    int count = 0;


    // count the number of digits first.
    while(temp > 0)
    {
        int digit = temp % 10;
        count++;
        temp = temp / 10;
    }
    cout<<"count:"<<count<<endl;


    int temp2 = n;

    while(temp2 > 0)
    {
        int digit = temp2 % 10;
        sum += (int)round(pow(digit,count));
        // we type-casted pow() becoz, defaultly it returns doubble.
        // round() --> will round the decimal to whole number.
        // Example : pow(3, 3) might internally be 26.999999... instead of 27.
        
        temp2 = temp2 / 10;
    }
    return sum;
}

int main()
{

    int n = 153;

    int sum = isArmstrong(n);
    cout<<"Sum is:"<<sum<<endl;

    if(sum == n)
    {
        cout<<"Number is armstrong!"<<endl;
    }
    else
    {
        cout<<"Number is not armstrong!"<<endl;
    }
    return 0;
}