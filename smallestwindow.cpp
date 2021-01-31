// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

const int no_of_chars = 256;

string findSubString(string str);

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string str;
        cin >> str;

        cout << findSubString(str).size() << endl;
    }
    return 0;
}
// } Driver Code Ends

string findSubString(string str)
{
    // Your code goes here
    int n = str.length();

    set<char> a;

    for (int i = 0; i < n; i++)
    {
        a.insert(str[i]);
    }
    int distinct = a.size();

    int start = 0, start_index = -1, min_len = INT_MAX;

    int count = 0;

    unordered_map<char, int> freq;

    for (int j = 0; j < n; j++)
    {
        freq[str[j]]++;

        if (freq[str[j]] == 1)
            count++;

        if (count == distinct)
        {
            while (freq[str[start]] > 1)
            {
                if (freq[str[start]] > 1)
                    freq[str[start]]--;
                start++;
            }

            int len = j - start + 1;

            if (min_len > len)
            {
                min_len = len;
                start_index = start;
            }
        }
    }

    return str.substr(start_index,min_len);
}