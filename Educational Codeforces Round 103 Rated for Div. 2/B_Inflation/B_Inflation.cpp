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

        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll l = 0, r = 1e14;

        while (l < r)
        {
            ll mid = (l + r) / 2;

            ll sum = a[0] + mid;

            bool ok = true;

            for (ll i = 1; i < n; i++)
            {
                ll temp = (k * sum) / 100;
                if (a[i] > temp)
                {
                    ok = false;
                    break;
                }
                sum += a[i];
            }

            if (ok)
                r = mid;
            else
                l = mid + 1;
        }

        cout << l << endl;
    }
    return 0;
}