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

        if (n == 1)
        {
            cout << k << endl;
            continue;
        }
        if (n == k)
        {
            cout << 1 << endl;
            continue;
        }
        if (n < k)
        {
            ll b = k / n;
            ll a = k % n;

            if (a != 0)
                b++;
            cout << b << endl;
        }
        else
        {
            ll c = n / k;
            ll d = n % k;

            if (d != 0)
                c += 1;
            k *= c;

            ll b = k / n;
            ll a = k % n;

            if (a != 0)
                b++;
            cout << b << endl;
        }
    }
    return 0;
}