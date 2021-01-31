#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, n, x;
        cin >> l >> n;

        set<int> a;

        for (int i = 0; i < l; i++)
        {
            cin >> x;
            a.insert(x);
        }
        bool found = false;
        for (auto i : a)
        {
            if (a.find(abs(n - i)) != a.end())
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}