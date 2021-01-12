#include <bits/stdc++.h>
// #define int long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int rows, col, temp, collision = 0;
        cin >> rows;

        vector<vector<int>> a(rows);
        std::unordered_map<int, int> freq;

        for (int i = 0; i < rows; i++)
        {
            cin >> col;
            for (int j = 0; j < col; j++)
            {
                cin >> temp;
                a[i].push_back(temp);

                freq[abs(temp)]++;
            }
        }

        // for (int i = 0; i < rows; i++)
        // {
        //     for (int j = 0; j < a[i].size(); j++)
        //     {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        for (auto x : freq)
            if (x.second > 1)
                collision += (x.second > 1);

        for (auto line : a)
        {
            vector<int, int> neg, pos;

            for (auto x : line)
            {
                if (x < 0)
                    neg.push_back(x);
                else
                {
                    pos.push_back(x);
                }
            }

            reverse(pos.begin(), pos.end());

            while (true)
            {
                int closest;

                if (neg.empty() && pos.empty())
                    break;

                else if (neg.empty())
                    closest = pos.back();
                else if (pos.empty())
                    closest = neg.back();
                else
                {
                    closest = (abs(neg.back()) < pos.back()) ? neg.back() : pos.back();
                }

                if (closest < 0)
                {
                    if (freq[abs(closest)] > 1)
                    {
                        collision = neg.size() - 1;
                    }
                    else
                    {
                        collision += pos.size();
                    }
                }
                else
                {
                    if (freq[abs(closest)] > 1)
                    {
                        collision += pos.size() - 1;
                    }
                    else
                    {
                        collision += neg.size();
                    }
                }

                if (closest < 0)
                    neg.pop_back();
                else
                    pos.pop_back();
            }
        }

        cout << collision << endl;
    }
    return 0;
}