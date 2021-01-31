// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        // code here
        map<int, int> a;

        for (int i = 0; i < n; i++)
            a[arr[i]]++;

        int x = 1, rep = -1, missing = -1;
        for (auto i : a)
        {
            if (i.first == x)
                x++;
            else
            {
                missing = x;
                x++;
            }

            if (i.second == 2)
                rep = i.first;
        }

        if (missing == -1)
            missing = x;
        int *s = new int(2);
        s[0] = rep;
        s[1] = missing;

        return s;
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} // } Driver Code Ends