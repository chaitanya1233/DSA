#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    void largestEle(vector<int> arr)
    {
        int largest = INT_MIN;

        for(int i = 0; i < arr.size();i++)
        {
            if(arr[i] > largest)
            {
                largest = arr[i];
            }
        }       
        cout<<"Largest Element is:"<<largest<<endl;
        
    }
};
int main()
{
         vector<int> arr = {1,3,4,4,66,54,443};

        Solution s;
        s.largestEle(arr);

    return 0;
}