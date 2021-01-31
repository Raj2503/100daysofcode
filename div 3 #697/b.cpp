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

        if (n < 2020){
            cout << "NO\n";
            continue;
        }

            
        ll temp = n % 2020;
        ll temp2 = n / 2020;

        if (temp <= temp2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}