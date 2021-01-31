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
        set<ll> y;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            y.insert(2 * a[i]);
        }
        bool found = false;
        for (ll i = 0; i < n; i++)
        {
            if (y.find(k + a[i]) != y.end())
            {
                found = true;
                break;
            }
            else {
    
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}