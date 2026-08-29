#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int temp = n;
    int rev = 0;

    while(temp > 0)    
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if(n == rev)
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{

    int n = 12100;

    bool ans = isPalindrome(n);

    cout<<"Is Palindrome:"<<ans<<endl;
    return 0;
}