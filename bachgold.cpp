#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll count = 0, odd = 0;

    if (n % 2 != 0)
    {
        n -= 3;
        odd++;
    }

    count += n / 2;

    cout << count + odd << endl;

    if (odd != 0)
        cout << "3 ";

    for (ll i = 1; i <= count; i++)
        cout << "2 ";

    return 0;
}