#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll dx[4040][4040];
ll pre[4040];

ll dext(ll x, ll chosen, ll n, ll k, ll a[])
{
    if (chosen >= k && (pre[x] - chosen >= k))
        return 0;
    else if (x >= n)
        return 1e10;
    else if (dx[x][chosen] != -1)
        return dx[x][chosen];

    ll choice1 = dext(x + 1, min(chosen + a[x], pre[x] - chosen), n, k, a);
    ll choice2 = dext(x + 1, min(pre[x] - chosen + a[x], chosen), n, k, a);

    return dx[x][chosen] = 1 + min(choice1, choice2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n], i, j;

        for (i = 0; i < n; i++)
            cin >> a[i];

        if (n == 1)
            cout << -1 << "\n";
        else
        {
            sort(a, a + n, greater<ll>());

            for (i = 0; i <= n + 10; i++)
            {
                pre[i] = 0;
                for (j = 0; j <= k + 10; j++)
                    dx[i][j] = -1;
            }

            for (i = 1; i <= n; i++)
                pre[i] = pre[i - 1] + a[i - 1];

            ll final = dext(0, 0, n, k, a);

            if (final > 1e9)
                cout << -1 << "\n";
            else
                cout << final << "\n";
        }
    }
    return 0;
}