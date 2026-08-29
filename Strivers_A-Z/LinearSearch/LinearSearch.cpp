#include <bits/stdc++.h>

using namespace std;

int LinearSearch(vector<int> arr,int target)
{
    int idx  = -1;
    for(int i = 0;i<arr.size();i++)
    {
        if(arr[i] ==  target)
        {
            idx = i;
            return idx;
        }
    }
    return idx;
}

int main()
{
    vector<int> arr = {3,4,8,5,8,90,10};
    int target = 100;
    int idx = LinearSearch(arr,target);

    if(idx != -1)
    {
        cout<<"Element "<<" found at index "<<idx<<endl;
    }
    else
    {
        cout<<"Not found!"<<endl;
    }

    return 0;
}