#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, x = 0;
        cin >> n >> m;
        ll temp1, temp2;
        string s;
        cin >> s;

        set<ll> d;

        for (int i = 0; i < m; i++)
        {
            x = 0;
            d.insert(x);

            cin >> temp1 >> temp2;

            for (int k = 0; k < n; k++)
            {
                if (k >= (temp1 - 1) && k <= (temp2 - 1))
                    continue;
                else
                {
                    if (s[k] == '+')
                        x++;
                    else if (s[k] == '-')
                        x--;
                }
                d.insert(x);
            }
            cout << d.size() << endl;
            d.clear();
        }
    }
    return 0;
}