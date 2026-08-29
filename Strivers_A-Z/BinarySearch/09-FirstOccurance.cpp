#include <bits/stdc++.h>

using namespace std;

int first_occurance(vector<int> arr,int n, int target)
{

    int low = 0;
    int high = n -1;

    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high-low)/2;
        
        if(arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] >= target)
        {
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;

}


int main()
{

    vector<int> arr = {3, 4, 13, 13, 13, 20, 40};
    int n = arr.size();
    int target = 13;
    
    int ans = first_occurance(arr,n,target);

    if(ans != -1)
    {
        cout<<"The First occurance of "<<target<<" is at "<<ans<<endl;
    }
    else
    {
        cout<<"element not found!"<<endl;
    }

    return 0;
}