#include <bits/stdc++.h>

using namespace std;

int main()
{

    queue<int> q;

    // Insert some elements into queue
    q.push(10);
    q.push(20);
    q.emplace(30);

    /// Print the elements of the queue
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}