#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n], i;

    for (i = 0; i < n; i++)
        cin >> a[i];

    int profit = 0, bought = 0, m = INT_MIN;

    for (i = 0; i < n; i++)
    {
        /* code */
        if (bought == 0)
        {
            if (a[i] < a[i + 1])
                bought = a[i];
        }
        else
        {
            if (i == n - 1)
            {
                m = max(m, a[i]);
                profit += m - bought;
            }

            if (a[i] > bought)
                m = max(m, a[i]);

            else if (m != INT_MIN)
            {
                profit += m - bought;
                bought = a[i];
                m = INT_MIN;
            }
        }
    }

    cout << profit;

    return 0;
}