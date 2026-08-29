#include <bits/stdc++.h>

using namespace std;

class Solution{

    // Define a function to classify marks into grades.
    public:
    void giveGrede(int marks)
    {
        if(marks < 25)
        {
            cout<<"Grade:F"<<endl;
        }
        else if (marks > 25 && marks < 39)
        {
            cout<<"Grade:E"<<endl;
        }
        else if(marks > 39 && marks < 49)
        {
            cout<<"Grade:E"<<endl;
        }
        else if(marks > 49 && marks < 59)
        {
            cout<<"Grade:D"<<endl;
        }
        else if(marks > 59 && marks < 69)
        {
            cout<<"Grade:C"<<endl;
        }
        else if(marks > 69 && marks < 79)
        {
            cout<<"Grade:B"<<endl;
        }
        else{
            cout<<"Grade:A"<<endl;
        }
    }
};

int main()
{

    int marks;
    cout<<"Enter your marks:";
    cin>>marks;


    Solution obj;
    obj.giveGrede(marks);

    return 0;
}