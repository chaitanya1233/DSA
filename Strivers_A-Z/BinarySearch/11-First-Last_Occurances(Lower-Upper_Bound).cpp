#include <bits/stdc++.h>

using namespace std;


int LowerBound(vector<int> arr,int x,int n)
{
    int low = 0;
    int high = arr.size();
    int ans = n;

    while(low <= high)
    {
        int mid = low +(high - low)/2;

        if(arr[mid] >= x)
        {
            ans = mid;
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}


int upperBound(vector<int> arr,int x, int n)
{
    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low <= high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }
    return ans;
}


int main()
{

    vector<int> arr = {2,4,6,8,8,8,11,13};

    int n = arr.size();

    int target = 8;

    int lb = LowerBound(arr,n,target);
    int ub = upperBound(arr,n,target);


    if(lb == n || arr[lb] != target)
    {
        cout<<"First and last occurance of given element is:"<<-1<<","<<-1<<endl;
    }
    else
    {
        cout<<"First and last occurance of element is :"<<lb<<","<<ub-1<<endl;
    }
    return 0;
}