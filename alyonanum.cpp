#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m, count = 0;
    cin >> n >> m;

    for (ll i = 1; i <= n; i++)
    {
        if ((5 - i % 5) % 5 == 0)
            count++;
    }

    cout << count;
    return 0;
}