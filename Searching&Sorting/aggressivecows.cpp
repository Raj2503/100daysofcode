#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        ll low = 0, high = a[n - 1], mid, best = 0;

        while (low <= high)
        {
            mid = (low + high + 1) / 2;
            ll cows = 1, left = 0;
            for (ll i = 1; i < n && cows < c; i++)
            {
                if (a[i] - a[left] >= mid)
                    left = i, cows++;
            }

            if (cows >= c)
            {
                best = max(best, mid);
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << best << endl;
    }

    return 0;
}
