#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        if (l * 2 <= r)
            cout << l << " " << l * 2 << endl;
        else
            cout << "-1 -1" << endl;
    }
    return 0;
}