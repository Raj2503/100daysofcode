#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int w, h, n;
    cin >> w >> h >> n;

    int paper = 0;

    while (w % 2 == 0)
    {
        paper *= 2;
        w = w / 2;
    }
    while (h % 2 == 0)
    {
        paper *= 2;
        h = h / 2;
    }

    if (paper >= n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}