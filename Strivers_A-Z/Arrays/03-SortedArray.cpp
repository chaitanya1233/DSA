#include <bits/stdc++.h>

using namespace std;

bool is_sorted(vector<int> arr)
{
    for(int i = 0;i<arr.size();i++)
    {
        for(int j = i+1;j<arr.size();j++)
        {
            if(arr[i] > arr[j])
            {
                return false;
            }
        }
    }

    return true;

}
int main()
{

     vector<int> arr = {1,2,9,4,5};

     bool flag = is_sorted(arr);

    cout<<"Is sorted:"<<flag<<endl;

    return 0;
}