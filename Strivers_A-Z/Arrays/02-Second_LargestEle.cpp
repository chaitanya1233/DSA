#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    void secondLargestEle(vector<int> arr)
    {
        int largest = INT_MIN;
        int secondLeargest = INT_MIN;


        for(int i = 0; i < arr.size();i++)
        {
            if(arr[i] > largest)
            {
                secondLeargest = largest;
                largest = arr[i];
            }
            else if(secondLeargest < arr[i] && arr[i] < largest)
            {
                secondLeargest = arr[i];
            }
        }       
        cout<<"Second largest element is:"<<secondLeargest<<endl;
        
    }
};
int main()
{
         vector<int> arr = {1,3,4,4,66,543,443};

        Solution s;
        s.secondLargestEle(arr);

    return 0;
}