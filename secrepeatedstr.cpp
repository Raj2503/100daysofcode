// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string secFrequent(string arr[], int n)
    {
        //code here.
        int num = 0, max = INT_MIN;
        unordered_map<string, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;

            if (freq[arr[i]] > max)
                max = freq[arr[i]];
        }
        int min = INT_MAX;
        string result;

        for (auto i : freq)
        {
            if (i.second < min)
            {
            }
        }
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
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent(arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends