#include <bits/stdc++.h>

using namespace std;

vector<int> count_occurance(vector<int> arr,int n,int target)
{
    int first = -1;
    int last = -1;

    for(int i = 0;i<n;i++)
    {
        if(arr[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
    return {first,last};
}


int main()
{

    vector<int> arr = {4,3,13,13,13,20,40};
    
    int n = arr.size();
    int target = 13;
    vector<int> v = count_occurance(arr,n,target);
    
    for(auto x : v)
    {
        cout<<x<<" ";
    }
    return 0;
}