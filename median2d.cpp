// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution
{
public:
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        // code here
        vector<int> a;

        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                a.push_back(matrix[i][j]);

        sort(a.begin(),a.end());

        return a[a.size()/2];
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                cin >> matrix[i][j];
        Solution obj;
        cout << obj.median(matrix, r, c) << endl;
    }
    return 0;
} // } Driver Code Ends