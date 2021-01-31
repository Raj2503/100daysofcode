#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll ones = 0, zeros = 0;
        for (ll i = 0; i < n; i++)
            if (s[i] == '1')
                ones++;
        zeros = n - ones;

        ll onet = 0, zerot = zeros;
        ll ans = min(ones, zeros);

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
                onet++;
            else
                zerot--;
            ans = min(ans, onet + zerot);
        }

        cout << ans << endl;
    }
    return 0;
}