#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r);

    for (int i = 0; i < r; i++)
    {
        matrix[i].assign(c, 0);
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int i, j;
    for (i = 0; i < matrix.size(); i++)
    {
        for (j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    return 0;
} // } Driver Code Ends