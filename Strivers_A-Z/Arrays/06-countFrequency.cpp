#include <bits/stdc++.h>

using namespace std;

void count_frequency(vector<int> arr)
{

    map<int,int> mp;

    // Build a frequency count
    for(auto x : arr)
    {
        mp[x]++;
    }

    // Find the frequency of each element
    for(auto x : mp)
    {
        cout<<x.first<<":"<<x.second<<endl;
    }
}
int main()
{
    vector<int> arr = {1,2,3,4,3,2,1};

    count_frequency(arr);

    return 0;
}


