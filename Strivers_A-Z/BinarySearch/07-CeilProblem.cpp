#include <bits/stdc++.h>
using namespace std;

int ceilProblem(vector<int> arr, int x, int n)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = arr[mid];      // candidate for ceil
            high = mid - 1;      // move left for smaller candidate
        }
        else
        {
            low = mid + 1;       // move right
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 25, 30, 50};
    int x = 35;
    int n = arr.size();

    int ceilVal = ceilProblem(arr, x, n);
    cout << "Ceil is: " << ceilVal << endl;
    return 0;
}
