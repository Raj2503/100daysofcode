// { Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];
        int r;
        cin >> r;
        cout << kthSmallest(mat, n, r) << endl;
    }
    // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
    return 0;
}
// } Driver Code Ends

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    // //Your code here
    // vector<int> a;
    // // set<int> s;

    // for (int i = 0; i < n; i++)
    //     for (int j = 0; j < n; j++)
    //     {
    //         // s.insert(mat[i][j]);
    //         a.push_back(mat[i][j]);
    //     }
    // sort(a.begin(), a.end());


    // return a[k-1];

    priority_queue<int,vector<int>> maxheap;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(maxheap.size()<k)
            maxheap.push(mat[i][j]);
            else {
                if(mat[i][j]<maxheap.top()){
                    maxheap.pop();
                    maxheap.push(mat[i][j]);
                }
            }
        }
    }

    return maxheap.top();
}
