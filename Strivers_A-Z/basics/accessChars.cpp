#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution{
    // Create a method to access individual character.
    public:
    void accessChars(string s)
    {
        for(int i = 0;i<s.length();i++)
        {
            std::cout<<s[i]<<endl;
        }
    }
};
int main()
{
    // String input
    string s = "Chaitanya";

    // Create a object of the Solution class 
    Solution sol;

    // Pass a string to the function and print.
    sol.accessChars(s);

    return 0;
}