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

int main()
{

    vector<int> arr = {1,2,3,3,4,5,8,9,10,10};
    int x = 1;
    int n = arr.size();

    int lb = LowerBound(arr,x,n);
    cout<<"Lower bound is:"<<lb<<endl;



    return 0;
}