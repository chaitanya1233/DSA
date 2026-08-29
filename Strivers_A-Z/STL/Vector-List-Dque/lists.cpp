#include <bits/stdc++.h>

using namespace std;

int main()
{

    list<int> ls;

    // Insert elements into vector 

    ls.push_back(10);
    ls.emplace_back(20);

    ls.push_front(-1);
    ls.emplace_front(0);

    ls.pop_back();
    ls.pop_front();

    for(auto x:ls)
    {
        cout<<x<<" ";
    }
    return 0;
}