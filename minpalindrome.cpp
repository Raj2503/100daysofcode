#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> computeLSP(string str)
{
    int m = str.length();

    vector<int> lps(m);

    int len = 0;
    lps[0] = 0;

    int i = 1;
    while (i < m)
    {
        if (str[i] == str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
                len = lps[len - 1];

            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int main()
{
    string str = "AACECAAAA";

    string rev = str;
    reverse(rev.begin(), rev.end());

    string concat = str + "#" + rev;

    vector<int> lps = computeLSP(concat);

    cout << str.length() - lps.back();
    return 0;
}