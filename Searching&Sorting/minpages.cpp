// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int findPages(int arr[], int n, int m);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int m;
        cin >> m;
        cout << findPages(A, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends

//User function template in C++

bool isPossible(int arr[], int n, int m, int currentMin)
{
    int students = 1;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > currentMin)
            return false;

        if (currentSum + arr[i] > currentMin)
        {
            students++;
            currentSum = arr[i];

            if (students > m)
                return false;
        }
        else
            currentSum += arr[i];
    }
    return true;
}

int findPages(int arr[], int n, int m)
{
    //code here
    if (n < m)
        return -1;

    int end = 0, start = 0, ans = INT_MAX;

    end = accumulate(arr, arr + n, end);

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (isPossible(arr, n, m, mid))
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}
