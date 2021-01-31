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

        if (n % 2 != 0)
            cout << "YES\n";
        else
        {
            while (n % 2 == 0 && n != 0)
                n = n / 2;

            if (n == 0 || n == 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}