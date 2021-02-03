#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<pair<int, int>> a;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            a.push_back({x, y});
        }
        sort(a.begin(), a.end());

        int idx = 0;

        for (int i = 1; i < a.size(); i++)
        {
            if (a[idx].second >= a[i].first)
                a[idx].second = max(a[idx].second, a[i].second);

            else
            {
                idx++;
                a[idx] = a[i];
            }
        }

        while (q--)
        {
            int k;
            cin >> k;

            int ans = -1;

            for (int i = 0; i <= idx; i++)
            {
                if ((a[i].second - a[i].first + 1) >= k)
                {
                    ans = a[i].first + k - 1;
                    break;
                }
                else
                    k =k- (a[i].second - a[i].first + 1);
            }
            cout << ans << endl;
        }
    }
    return 0;
}