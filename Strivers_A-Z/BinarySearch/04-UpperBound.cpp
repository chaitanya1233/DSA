#include <bits/stdc++.h>

using namespace std;

int upper_bound(vector<int> arr,int x, int n)
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
    vector<int> arr = {2,3,6,7,8,8,11,11,11,12};

    int x = 13;
    int n = arr.size();

    int ub = upper_bound(arr,x,n);
    cout<<"Upper bound is:"<<ub<<endl;
    return 0;
}