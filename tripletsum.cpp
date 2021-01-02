#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;

    while (t--)
    {

        int n, x;
        cin >> n >> x;
        int a[n];
        bool isThere = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n - 2; i++)
        {
            int temp = x - a[i];
            unordered_set<int> b;
            for (int j = i + 1; j < n; j++)
            {
                if (b.find(temp - a[j]) != b.end())
                {
                    isThere = true;
                    break;
                }
                b.insert(a[j]);
            }

            if (isThere)
                break;
        }

        if (isThere)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}