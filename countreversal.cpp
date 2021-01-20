#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.length() % 2 != 0)
            cout << -1 << endl;
        else
        {
            stack<char> st;

            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '}' && !st.empty())
                {
                    if (st.top() == '{')
                        st.pop();
                    else
                        st.push(s[i]);
                }
                else
                    st.push(s[i]);
            }

            int len = st.size(), n = 0;
            while (!st.empty() && st.top() == '{')
            {
                st.pop();
                n++;
            }
            int m = len - n;
            // cout << m << " " << n << endl;
            cout << len / 2 + n % 2 << endl;
            // cout << ceil(m / 2) + ceil(n / 2) << endl;
        }
    }
    return 0;
}
