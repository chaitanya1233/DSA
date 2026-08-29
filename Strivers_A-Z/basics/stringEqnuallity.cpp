#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution
{
    public:
    bool stringComparision(string s1,string s2)
    {
        return s1 == s2;
    }
};

using namespace std;
int main()
{

    string s1;
    cout<<"Enter string1:";
    cin>>s1;


    string s2;
    cout<<"Enter string2:";
    cin>>s2;

    Solution obj;

    if(obj.stringComparision(s1,s2))
    {
        cout<<"Both strings are equal!"<<endl;
    }
    else
    {
        cout<<"Both string are not equal!"<<endl;
    }


    return 0;
}
