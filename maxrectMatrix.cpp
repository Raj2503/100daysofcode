// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int maxArea(int M[MAX][MAX], int n, int m);
int main()
{
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> M[i][j];
            }
        }
        cout << maxArea(M, n, m) << endl;
    }
}
// } Driver Code Ends

/*You are required to complete this method*/
int maxArea(int M[MAX][MAX], int n, int m)
{
    // Your code here
    int result = maxHist(M[0]);
}
