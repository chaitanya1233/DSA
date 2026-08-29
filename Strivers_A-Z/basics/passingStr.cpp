// Strings in C++ can be assigned and passed like primitive types.
// Assigning one string to another makes a deep copy of the character sequence:


#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution{

    public:
    string modifyString(string str)
    {
        string newStr = str;

        // Modify new String 
        newStr[0] = 'H'; // This will create a copy of  the string.

        // Return the new string.
        return newStr;
    }
};
int main()
{

    // When you pass a string as an argument
    //  to a function, you're essentially making a copy of the string.
    string s = "Chaitanya";

    Solution sol;

    string newStr = sol.modifyString(s);

    std::cout<<"Original String:"<<s<<endl;
    std::cout<<"Modified String:"<<newStr<<endl;


    return 0;
}