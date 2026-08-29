#include <bits/stdc++.h>

using namespace std;

int reverseNum(int n)
{
    int rev = 0;
    int temp = n;
    while(temp != 0)
    {
        int digit = temp % 10;
        rev = (rev * 10 ) + digit;
        temp /= 10;
    }

    return rev;
}

int main()
{

    int n = 14300;

    int x = reverseNum(n);
    cout<<x<<endl;
    return 0;
}
