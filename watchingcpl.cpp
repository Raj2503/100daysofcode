#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll dp[4020][4020];
ll pref[4020];

ll dfn(ll idx, ll taken, ll n, ll k, ll a[])
{
    if (taken >= k && (pref[idx] - taken >= k))
        return 0;
    else if (idx >= n)
        return 1e10;
    else if (dp[idx][taken] != -1)
        return dp[idx][taken];

    ll c1 = dfn(idx + 1, min(taken + a[idx], pref[idx] - taken), n, k, a);
    ll c2 = dfn(idx + 1, min(pref[idx] - taken + a[idx], taken), n, k, a);

    return dp[idx][taken] = 1 + min(c1, c2);
}

int main()
{
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
            cout << -1 << endl;
        else
        {
            sort(a, a + n, greater<int>());

            for (i = 0; i <= n + 10; i++)
            {
                pref[i] = 0;
                for (j = 0; j <= k + 10; j++)
                    dp[i][j] = -1;
            }

            for (i = 1; i <= n; i++)
                pref[i] = pref[i - 1] + a[i - 1];

            ll ans = dfn(0, 0, n, k, a);

            if(ans>1e9)
            cout<<-1<<endl;
            else 
            cout<<ans<<endl;
        }
    }
    return 0;
}