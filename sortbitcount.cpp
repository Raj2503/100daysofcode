// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
int cmp(int a, int b)
{
    int count1 = 0, count2 = 0;

    while (a)
    {
        if (a & 1)
            count1++;
        a = a >> 1;
    }

    while (b)
    {
        if (b & 1)
            count2++;
        b = b >> 1;
    }

    if (count1 > count2)
        return true;
    else
        return false;
}
class Solution
{
public:
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr, arr + n, cmp);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends