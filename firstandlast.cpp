#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (find(a.begin(), a.end(), x) == a.end())
            cout << -1 << endl;
        else
        {
            sort(a.begin(), a.end());

            cout << lower_bound(a.begin(), a.end(), x) - a.begin() << " " << upper_bound(a.begin(), a.end(), x) - a.begin() - 1 << endl;
        }
    }
    return 0;
}