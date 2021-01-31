#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;

        int l = 0, r = n - 1, sol = 0;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (a[mid] <= temp)
            {
                l = mid + 1;
                sol = mid;
            }
            else
                r = mid - 1;
        }
        int sum = 0;
        for (int j = 0; j <= sol; j++)
            sum += a[j];

        cout << sol + 1 << " " << sum << endl;
    }
    return 0;
}