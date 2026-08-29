#include <bits/stdc++.h>

using namespace std;


int main()
{

    vector<int> v;

    // Insert elements into the vector.

    v.push_back(10);
    v.push_back(20);
    v.emplace_back(40);
    
    // Iterate over a vector

    for(auto x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}