#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int x = n / k;

    // unordered_map initialization
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    for (auto i : freq)
        if (i.second > x)
            cout << i.first << endl;

    return 0;
}