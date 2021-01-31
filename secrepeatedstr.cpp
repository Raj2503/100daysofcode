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
        int num = 0, maxlar = INT_MIN;
        unordered_map<string, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;

            maxlar = max(freq[arr[i]], maxlar);
        }
        int minsec = INT_MIN;
        string result;

        for (auto i : freq)
        {
            if (i.second != maxlar)
            {
                minsec = max(minsec, i.second);
                if (minsec == i.second)
                    result = i.first;
            }
        }
        return result;
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