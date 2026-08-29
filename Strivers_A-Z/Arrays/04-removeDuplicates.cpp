#include <bits/stdc++.h>

using namespace std;

void remove_duplicates(vector<int> arr)
{
    vector<int> v;
    // Build a frequency map.
    map<int,int> mp;

    for(auto x:arr)
    {
        mp[x]++;
    }

    // Store the elements which are originals.
    for(auto x:mp)
    {
        v.push_back(x.first);
    }

    // Print all the elements 
    for(auto x : v)
    {
        cout<<x<<" ";
    }
}

int main()
{

    vector<int> arr = {1,2,3,4};

    remove_duplicates(arr);


    return 0;
}