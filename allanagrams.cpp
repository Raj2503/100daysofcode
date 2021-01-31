// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string>> Anagrams(vector<string> &string_list);

// } Driver Code Ends

//User function Template for C++

vector<vector<string>> Anagrams(vector<string> &string_list)
{
    // Your Code Here
    map<string, vector<string>> mp;

    for (int i = 0; i < string_list.size(); i++)
    {
        string data = string_list[i];

        sort(data.begin(), data.end());

        mp[data].push_back(string_list[i]);
    }

    vector<vector<string>> res;
    for (auto x : mp)
    {
        vector<string> val;

        for (auto y : x.second)
        {
            val.push_back(y);
        }

        res.push_back(val);
    }

    return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin >> string_list[i];
        vector<vector<string>> result = Anagrams(string_list);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
// } Driver Code Ends

//  int n = string_list.size();
//     vector<vector<string>> str(n);
//     unordered_map<char, int> a;
//     unordered_map<char, int> b;
//     int l = 0;

//     auto i = string_list.begin();

//     while (i != string_list.end())
//     {

//         for (char ch : *i)
//         {
//             a[ch]++;
//         }

//         auto x = i;
//         x++;
//         str[l].push_back(*i);
//         while (x != string_list.end())
//         {
// cout<<*x<<'\t';
//             for (auto ch : *x)
//             {
//                 b[ch]++;
//             }

//             if (b == a)
//             {
//                 cout<<"Asdasdasdasdasdasd";
//                 str[l].push_back(*x);
//                 string_list.erase(x);
//             }
//             x++;
//             b.clear();
//         }
//         l++;
//         i++;
//         a.clear();

//         cout<<"\n\n\n";
//     }

//     return str;