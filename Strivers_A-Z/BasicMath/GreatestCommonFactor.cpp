#include <bits/stdc++.h>

using namespace std;


// Brute force approach : start from 1 to the minimum number out of n1 and n2.
/*int GDC(int n1,int n2)
{
    int x = -1;
    for(int i = 1 ;i <= min(n1,n2);i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            x = i;
        }
    }
    return x;
}
*/



// OPtimized approach : we know that, we wana a largest common factor. 
// so can we start from last of the min(n1,n2) and go backword.

int GDC(int n1,int n2)
{
    for(int i = min(n1,n2);i>0;i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n1 = 24;
    int n2 = 18;

    int x = GDC(n1,n2);
    cout<<"Greatest common factor of "<<n1<<" and "<<n2<<" is "<<x<<endl;


}