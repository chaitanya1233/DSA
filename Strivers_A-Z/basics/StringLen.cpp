#include <bits/stdc++.h>

using namespace std;

class Solution{

    public:
    int  strLen(string  s)
    {
        return s.length();
    }
};


int main()
{

    Solution sol;
    string s  = "Chaitanya";
    int l = sol.strLen(s);
    std::cout<<"Length of the string is:"<<l<<endl;

    return 0;
}