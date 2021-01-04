#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        int arr[n], i;

        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        ll m;
        cin >> m;
\

        sort(arr, arr + n);


        int min_diff = 1e9,diff=0;

        for (int i = 0; i + m - 1 < n; i++)
        {
            diff = arr[i + m - 1] - arr[i];
            if (diff < min_diff)
                min_diff = diff;
        }

        cout << min_diff << endl;
    }
    return 0;
}