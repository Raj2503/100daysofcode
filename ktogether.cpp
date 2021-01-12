#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], k, i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        cin >> k;

        int count = 0;

        for (i = 0; i < n; i++)
            if (a[i] <= k)
                count++;
        int bad = 0;
        for (i = 0; i < count; i++)
            if (a[i] > k)
                bad++;

        int ans = bad, j;

        for (i = 0, j = count; j < n; j++, i++)
        {
            if(a[i]>k)
            bad--;

            if(a[j]>k)
            bad++;

            ans = min(ans,bad);
        }

        cout<<ans<<endl;
    }
}