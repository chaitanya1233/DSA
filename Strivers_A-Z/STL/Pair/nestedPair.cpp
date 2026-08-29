#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Cannot store multiple pairs more than 2 
    // pair <int, pair<int,int>> p = {{1,{2,3}},{2,{3,4}},{3,{4,5}}};


    // Pair only stores two values

    pair<int,pair<int,int>> p = {1,{2,4}};

    // print the first value of the pair
    cout<<"First Value:"<<p.first<<endl;

    // Second pair first value 
    cout<<"Second pair first value:"<<p.second.first<<endl;

    // Second pair second value 
    cout<<"Second pair second value:"<<p.second.second<<endl;

    return 0;
}