#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string printStack(stack<char> s, string temp)
{
    // If stack is empty then return
    if (s.empty())
        return temp;

    char x = s.top();

    // Pop the top element of the stack
    s.pop();

    // Recursively call the function PrintStack
    printStack(s, temp);

    // Print the stack element starting
    // from the bottom
    temp += x;

    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}

string rec(string str, int i, stack<char> s)
{
    if (i == str.length() )
        return printStack(s, "");

    if (s.empty())
    {
        s.push(str[i]);
    }

    else if (s.top() != str[i])
    {
        s.push(str[i]);
    }

    rec(str, i + 1, s);
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        stack<char> s;
        cout << rec(str, 0, s) << endl;
    }
    return 0;
}