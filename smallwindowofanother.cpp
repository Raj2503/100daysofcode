// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// return the smallest window in S with all the characters of P
// if no such window exists, return "-1"
string smallestWindow(string S, string P)
{
    // Your code here
    if (S.length() < P.length())
        return "";

    int p[256] = {0};
    int s[256] = {0};

    int i, start = 0, start_index = -1, min_len = INT_MAX, count = 0;

    for (i = 0; i < P.length(); i++)
        p[P[i]]++;

    for (i = 0; i < S.length(); i++)
    {
        s[S[i]]++;

        if (s[S[i]] <= p[S[i]])
            count++;

        if (count == P.length())
        {

            while (s[S[start]] > p[S[start]] || p[S[start]] == 0)
            {

                if (s[S[start]] > p[S[start]])
                    s[S[start]]--;
                start++;
            }

            int len_w = i - start + 1;

            if (min_len > len_w)
            {
                min_len = len_w;
                start_index = start;
            }
        }
    }

    if (start_index == -1)
        return "";

    return S.substr(start_index, min_len);
}

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string pat;
        cin >> pat;

        cout << smallestWindow(s, pat) << endl;
    }
    return 0;
} // } Driver Code Ends