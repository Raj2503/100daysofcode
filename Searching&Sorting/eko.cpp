#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    ll l = 0, r = a[n - 1], ans = -1;

    while (l <= r)
    {
        ll mid = (l + r + 1) / 2, sum = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] > mid)
                sum += (a[i] - mid);
        }

        if (sum >= m)
        {
            ans = max(ans, mid);
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans << endl;
    return 0;
}