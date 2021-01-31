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
        vector<int> a(n);
        ll bot = 0, rejected = 0, slow = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] != -1)
                rejected++;

            if (a[i] > k)
                slow++;

            if (a[i] == 0 || a[i] == 1)
                bot++;
        }

        if (rejected < ceil((float)n / 2))
            cout << "Rejected\n";
        else if (slow > 0)
            cout << "Too Slow\n";
        else if (bot == n)
            cout << "Bot\n";
        else
            cout << "Accepted\n";
    }
    return 0;
}