#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n > 2)
    {
        sort(a.begin(), a.end());
        vector<ll> b(n);
        ll k = 0;
        for (ll i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (i == j)
                b[i] = a[k++];
            else
            {
                b[i] = a[k++];
                b[j] = a[k++];
            }
        }

        for (ll i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }

        // ll discomfort = abs(a[0] - a[n - 1]);

        // for (ll i = 0; i < n - 1; i++)
        // {
        //     discomfort = max(discomfort, abs(a[i] - a[i + 1]));
        // }
        // cout << discomfort;
    }
    else
    {
        cout << a[0] << " " << a[1];
    }

    return 0;
}