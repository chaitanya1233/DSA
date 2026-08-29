#include <bits/stdc++.h>

using namespace std;


int main()
{

    vector<int>  v = {10,20,30,40};

    // Insert element into vector.
    int newEle = 5;

    // Insert element at index 2
    v.insert(v.begin() + 2,newEle);



    // Insert 2 three times from index 4 
    v.insert(v.begin()+4,3,2);


    // Remove element from the vector.
    v.erase(v.begin() + 2);

    // Erase entire vector
    v.clear();
    



    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}