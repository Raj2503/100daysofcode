// { Driver Code Starts
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;

int lcs(int, int, string, string);

int main()
{
    int t, n, k, x, y;

    cin >> t;
    while (t--)
    {
        cin >> x >> y; // Take size of both the strings as input
        string s1, s2;
        cin >> s1 >> s2; // Take both the string as input

        cout << lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
// } Driver Code Ends

// function to find longest common subsequence

int lcs(int x, int y, string s1, string s2)
{

    // your code here

    if (x < y)
        return lcs(y, x, s2, s1);
    set<char> a;
    int count = 0;

    if(s1.find(s2[0])!=string::npos){
                   a.insert(s2[0]);
            count++;
    }
    
    if(s1.find(s2[y-1])!=string::npos &&  a.find(s2[y-1]) == a.end() ){
                   a.insert(s2[y-1]);
            count++;
    }

    for (int i = 0; i < y; i++)
    {
        if (s1.find(s2[i]) != string::npos && a.find(s2[i]) == a.end() && i < y - 1 && i > 0 && a.find(s2[i - 1]) == a.end() && a.find(s2[i + 1]) == a.end())
        {
            a.insert(s2[i]);
            count++;
        }
    }

    // for (auto i : a)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    return count;
}
