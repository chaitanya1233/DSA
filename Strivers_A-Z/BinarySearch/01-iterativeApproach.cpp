#include <bits/stdc++.h>

using namespace std;

int BinarySearch(vector<int> arr,int n,int target)
{
    int low = 0;
    int high = n -1;
    
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] > target)
        {
            high = mid -1;
        }
        else{
            low = mid +1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1,3,7,23,64,97};

    int n = arr.size();
    int target = 23;

    int idx = BinarySearch(arr,n,target);

    if(idx == -1)
    {
        cout<<"Element not found!"<<endl;
    }
    else
    {
        cout<<"Element found at index "<<idx<<endl;
    }
    return 0;
}   