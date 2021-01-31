#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d;
        return 0;
    }
    ll count = 0;
    set<ll> a;
    for (ll i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % m == 0 || i % l == 0 || i % n == 0)
            a.insert(i);
    }

    cout << a.size();
    return 0;
}