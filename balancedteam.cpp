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

    sort(a.begin(), a.end());

    if (*min_element(a.begin(), a.end()) == *max_element(a.begin(), a.end()))
        cout << n;
    else
    {
        ll max_len = INT_MIN,j;
        for (ll i = 0; i < n; i++)
        {
            ll len = 0;

            for (j = i + 1; j < n; j++)
            {
                if (a[j] - a[i] <= 5)
                    len++;
                else
                    break;
            }

            if (len > max_len)
                max_len = len;

            if (j == n)
                break;
        }

        cout << max_len + 1;
    }
    return 0;
}