#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;

        ll x[k],y[k];
        map<ll, ll> boys;
        map<ll, ll> girls;

        for (ll i = 0; i < k; i++)
        {
            cin>>x[i];
            boys[x[i]]++;
        }

        for (ll i = 0; i < k; i++)
        {
            cin>>y[i];
            girls[y[i]]++;
        }

        ll result = 0;

        for (ll i = 0; i < k; i++)
        {
            result += (k - 1) - (boys[x[i]] - 1) - (girls[y[i]] - 1);
        }

        cout << (result / 2) << endl;
    }
    return 0;
}