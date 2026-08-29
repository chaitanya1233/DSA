#include <bits/stdc++.h>

using namespace std;

int BinarySearch(vector<int> arr,int n,int target,int low ,int high)
{

    // Base case.
    if(low > high)
    {
        return -1;
    }

    int mid = low + (high-low)/2;
    
    if(arr[mid] == target)
    {
        return mid;
    }
    else if(arr[mid] > target)
    {
        return BinarySearch(arr,n,target,low , mid -1);
    }
    else
    {
       return BinarySearch(arr,n,target,mid + 1,high);
    }
}

int main()
{
    int element = 4;


    vector<int> arr = {1,2,4,66,77,91,101};
    int low = 0;
    int high = arr.size()-1;
    int n = arr.size();

    
    int idx = BinarySearch(arr,n,element,low,high);

    if(idx == -1)
    {
        cout<<"Element not found!"<<endl;
    }
    else{
        cout<<"Element found at index:"<<idx<<endl;
    }
    return 0;
}