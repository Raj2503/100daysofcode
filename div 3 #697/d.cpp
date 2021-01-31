#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> a, b, temp(n);

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            temp.push_back(x);
        }

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == 1)
                a.push_back(temp[i]);
            else
                b.push_back(temp[i]);
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        ll sumA = 0;
        ll sumB = accumulate(b.begin(), b.end(), 0ll);

        ll ans = INT_MAX, r = b.size();

        for (ll l = 0; l <= a.size(); l++)
        {
            while (r > 0 && sumA + sumB - b[r - 1] >= m)
            {
                r--;
                sumB -= b[r];
            }

            if (sumA + sumB >= m)
                ans = min(ans, 2 * r + 1);

            if(l!=a.size())
            sumA = a[l];
        }

        if (ans == INT_MAX)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}