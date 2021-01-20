#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int getFlip(string s, char ex)
{
    int flips = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ex)
            flips++;

        if (ex == '0')
            ex = '1';
        else
            ex = '0';
    }
    return flips;
}

int minFLips(string s)
{
    return min(getFlip(s, '0'),
               getFlip(s, '1'));
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;
        cout<<minFLips(s)<<endl;
    }
    return 0;
}

// void PrintStack(stack<char> s)
// {
//     // If stack is empty then return
//     if (s.empty())
//         return;

//     int x = s.top();

//     // Pop the top element of the stack
//     s.pop();

//     // Recursively call the function PrintStack
//     PrintStack(s);

//     // Print the stack element starting
//     // from the bottom
//     cout << x << " ";

//     // Push the same element onto the stack
//     // to preserve the order
//     s.push(x);
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         stack<char> st;
//         int flips = 0;

//         if (s.length() % 2 != 0)
//         {
//             if (s[0] == s[1])
//             {
//                 if (s[0] == '0')
//                     st.push('1');
//                 else
//                     st.push('0');
//                 flips++;
//             }
//         }

//         else {
//             st.push(s[0]);
//         }

//         for (int i = 1; i < s.length(); i++)
//         {

//             if (st.empty() == true)
//             {

//                 if (s[i] == s[i + 1] && s[i] != s[i + 2] && i + 2 < s.length())
//                 {
//                     if (s[i] == '0')
//                         st.push('1');
//                     else
//                         st.push('0');
//                     flips++;
//                 }
//                 else
//                     st.push(s[i]);

//                 continue;
//             }
//             else
//             {
//                 char temp = st.top();

//                 if (temp == s[i])
//                 {
//                     flips++;

//                     if (s[i] == '0')
//                         st.push('1');
//                     else
//                         st.push('0');
//                 }
//                 else
//                     st.push(s[i]);
//             }
//         }
//         // PrintStack(st);
//         // cout << endl;
//         cout << flips << endl;
//     }
//     return 0;
// }