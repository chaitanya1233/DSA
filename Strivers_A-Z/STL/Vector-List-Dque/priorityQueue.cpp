#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> pq;

    // Insert element into priority queue.
    pq.push(10);
    pq.push (3);
    pq.push(30);
    pq.push(4);

    // Find element at the top
    int t  = pq.top();

    cout<<"Element at top is:"<<t<<endl;

    // delete top element 
    pq.pop();

    cout<<"Element at top after pop opration is:"<<pq.top()<<endl;
    return 0;
}