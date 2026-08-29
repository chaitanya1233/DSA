#include <bits/stdc++.h>

int countNums(int nums)
{
    int count = 0;
    int temp = nums;

    while(temp != 0)
    {
        int digit = temp % 10;
        count = count + 1;
        temp /= 10;
    }
    return count;
}

using namespace std;

int main()
{
    int num = 12532;

    int x = countNums(num);
    cout<<"Digits in given number are:"<<x<<endl;
    
    return 0;
}