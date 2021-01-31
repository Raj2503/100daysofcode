#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll k, i, n, m;
    cin >> k;
    bool found = false;
    for (ll i = 5; i <= k; i++)
    {
        if (k % i == 0)
        {
            if (k / i >= 5)
            {
                n = i;
                m = k / i;
                found = true;
                break;
            }
        }
    }

    if (!found)
        cout << -1;
    else
    {
        string result = "";
        char a[] = {'a', 'e', 'i', 'o', 'u'};

        for (ll i = 0; i < n; i++)
        {
            ll temp = i;
            for (ll j = 0; j < m; j++)
            {
                temp = (temp) % 5;
                result += a[temp];
                temp++;
            }
        }

        cout << result;
    }
    return 0;
}