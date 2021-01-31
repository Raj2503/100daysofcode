// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int> &a, int k);

// Position this line where user code will be pasted.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<int>> ans = fourSum(a, k);
        for (auto &v : ans)
        {
            for (int &u : v)
            {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty())
        {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends

// User function template for C++

// arr[] : int input array of integers
// k : the quadruple sum required
vector<vector<int>> fourSum(vector<int> &arr, int k)
{
    // Your code goes here

    vector<vector<int>> a;
    vector<int> b;
    int l = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int u = j; u < n; u++)
            {
                auto it = find(arr.begin(), arr.end(), (k - (arr[i] + arr[j] + arr[u])));
                if (it != arr.end())
                {
                    b.push_back(arr[i]);
                    b.push_back(arr[j]);
                    b.push_back(arr[u]);
                    b.push_back(arr(it - arr.begin()));

                    a.push_back(b);
                    b.clear();
                }
            }
        }
    }

    return a;
}