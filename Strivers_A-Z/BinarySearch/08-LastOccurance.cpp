    #include <bits/stdc++.h>

    using namespace std;

    int LastOccurance(vector<int> arr,int n, int target)
    {
        int low = 0;
        int high = n -1;
        int ans = -1;

        while(low <= high)
        {

            int mid = low + (high - low)/2;

            if(arr[mid] == target)
            {
                ans = mid;
                low = mid + 1; // why ? , becoz we know , array is sorted ,so next element will be
                               // ahead of this index, so make low =  mid + 1;
            }
            else if(arr[mid] >= target)
            {
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

        vector<int> arr = {3, 4, 13, 13, 13, 20, 40};

        int n = arr.size();
        int target = 6;

        int ans = LastOccurance(arr,n,target);

        cout<<"Last occurance is:"<<ans<<endl;
        return 0;
    }