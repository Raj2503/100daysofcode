#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll temp = k;

        while (temp % 2 == 0)
            temp /= 2;
        vector<int> a(n);

        for (ll i = 0; i < n; i++)
            cin >> a[i];
        bool possible = true;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % temp != 0)
            {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}