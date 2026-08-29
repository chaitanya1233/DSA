#include <bits/stdc++.h>

using namespace std;

class Solution
{
    // Is adult check 
    public:
    void isAdult(int age)
    {
        if(age >= 18)
        {
            cout<<"You are adult!"<<endl;
        }
        else{
            cout<<"You are not adult!"<<endl;
        }
    }
};

int main()
{

    int age;
    cout<<"Enter your age:";
    cin>>age;

    Solution obj;
    obj.isAdult(age);


    return 0;
}