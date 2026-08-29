#include <bits/stdc++.h>

using namespace std;

int searchEle(vector<int> arr,int element)
{
    int n = arr.size();
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == element)
        {
            int ele = arr[i];
            return ele;
        }
    }
    return -1;
}
int main()
{
    int element = 10;

    vector<int> arr = {10,20,332,2,14,5};

    int ele = searchEle(arr,element);

    if(ele == -1)
    {
        cout<<"Element not found!"<<endl;
    }
    else
    {
        cout<<"Element found!"<<endl;
    }
    return 0;
}
