#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> a;
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }

    if (x > y)
    {
        cout << n;
    }
    else
    {
        double count = 0;

        for (ll i = 0; i < n; i++)
            if (a[i] <= x)
                count++;

        cout<<ceil(count/2);
    }

    return 0;
}