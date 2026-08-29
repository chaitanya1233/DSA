#include <bits/stdc++.h>

using namespace std;


class Solution
{   
    public:
    bool validParenthesis(string s)
    {
        int count = 0;

        for(char c : s)
        {
            if(c == '(' || c == '{' || c=='[')
            {
                count += 1;
            }
            if(c == ')' || c == '}' || c == ']')
            {
                count -= 1;
            }
        }

        return count;
    }
};


int main()
{
    string s = "()[]{}";

    Solution sol;

    int count = sol.validParenthesis(s);
    

    if(count != 0)
    {
        cout<<"Not valid Parenthesis!";
    }
    else
    {
        cout<<"Valid Parenthesis!";
    }
    return 0;
}