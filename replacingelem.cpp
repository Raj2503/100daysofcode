#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;

        vector<int> lower, greater;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp > d)
                greater.push_back(temp);
            else
                lower.push_back(temp);
        }

        if (greater.size() == n)
            cout << "NO" << endl;
        else if (lower.size() == n)
            cout << "YES" << endl;
        else
        {
            sort(lower.begin(),lower.end());
            int sum = 0, e = 0;
            bool po= false;
            for (auto i : lower)
            {
                e++;
                sum += i;
                if (sum <= d && e == 2)
                {
                    cout << "YES" << endl;
                    po = true;
                    break;
                }
                else if(sum>d) {
                    sum-=i;
                    e--;
                }
            }
            if(!po)
            cout<<"NO"<<endl;

        }
    }
    return 0;
}