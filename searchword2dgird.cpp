#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool searchGrid(int n, int m,char a[][100], int i, int j, string s)
{
    if (a[i][j] != s[0])
        return false;

    int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int d = 0; d < 8; d++)
    {
        int k, r = i + x[d], c = j + y[d];

        for (k = 1; k < s.length(); k++)
        {
            if (r < 0 || c < 0 || r >= n || c >= m)
                break;

            if (a[r][c] != s[k])
                break;

            r += x[d], c += y[d];
        }

        if (k == s.length())
            return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        char a[n][100];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];

        string x;
        cin >> x;
        bool found = false;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (searchGrid(n,m,a, i, j, x))
                {
                    cout << i << " " << j <<", ";
                    found = true;
                }
                if(!found)
                cout<<-1;
                cout<<endl;
    }
    return 0;
}