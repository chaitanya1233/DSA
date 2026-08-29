#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int> arr,int x,int n)
{

    int low = 0;
    int high  = n -1;
    int ans = n;

    // Search for the lower bound and insert there.
    while(low <= high)
    {
        int mid = (low + high)/2;

        // if current element >=  x, update, ans = mid.
        if(arr[mid] >= x)
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

    vector<int> arr = {1,2,4,7};

    int x = 3;
    int n = arr.size();
    int idx = searchInsert(arr,x,n);

    cout<<idx<<endl;
    return 0;
}