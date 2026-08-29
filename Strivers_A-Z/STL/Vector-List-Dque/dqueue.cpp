#include <bits/stdc++.h>

using namespace std;

int main()
{

    deque<int>  dq;

    // Insert elements into deque
    dq.push_front(10);
    dq.push_back(20);
    dq.emplace_back(30);
    dq.emplace_front(40);

    for(auto x: dq)
    {
        cout<<x<<" ";
    }

    return 0;
}