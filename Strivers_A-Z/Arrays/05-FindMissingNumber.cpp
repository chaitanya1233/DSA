#include <bits/stdc++.h>

using namespace std;

void missingNum(vector<int> arr)
{
    int n = 7;
    int actual_sum = 0;
    int total_sum = (n *(n + 1))/2;

    for(auto x : arr)
    {
        actual_sum += x;
    }

    int missing_num = total_sum - actual_sum;
    cout<<"Missing number is:"<<missing_num<<endl;

}
int main()
{

    vector<int> arr = {1,2,3,4,5,7};

    missingNum(arr);

    return 0;
}