#include <bits/stdc++.h>

using namespace std;

int floorProblem(vector<int> arr,int x ,int n)
{
    
    int low = 0;
    int high = n -1;
    int ans = -1;

    while(low  <=  high)
    {
        int mid = (high+low)/2;

        if(arr[mid] <= x)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    }
    return ans;

}

int main()
{   

    vector<int> arr = {10,20,30,35,40};

    int x = 25;
    int n = arr.size();

    int floor = floorProblem(arr,x,n);
    cout<<"Floor is:"<<floor<<endl;
    return 0;
}