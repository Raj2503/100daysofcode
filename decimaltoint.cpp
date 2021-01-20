// { Driver Code Starts
// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
} // } Driver Code Ends

// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &str)
{
    // code here
    int num = 0;
    for (int i = 0; i < str.length(); i++)
    {
        switch (str[i])
        {
        case 'I':
            if ((str[i + 1] == 'V' || str[i + 1] == 'X' || str[i + 1] == 'L' || str[i + 1] == 'C' || str[i + 1] == 'D' || str[i + 1] == 'M') && (i + 1) < str.length())
                num--;
            else
                num++;

            break;

        case 'V':
            if ((str[i + 1] == 'X' || str[i + 1] == 'L' || str[i + 1] == 'C' || str[i + 1] == 'D' || str[i + 1] == 'M') && ((i + 1) < str.length()))
                num -= 5;
            else
                num += 5;
            break;

        case 'X':
            if ((str[i + 1] == 'L' || str[i + 1] == 'C' || str[i + 1] == 'D' || str[i + 1] == 'M') && (i + 1) < str.length())
                num -= 10;
            else
                num += 10;
            break;
        case 'L':
            if ((str[i + 1] == 'C' || str[i + 1] == 'D' || str[i + 1] == 'M') && (i + 1) < str.length())
                num -= 50;
            else
                num += 50;
            break;
        case 'C':
            if ((str[i + 1] == 'D' || str[i + 1] == 'M') && (i + 1) < str.length())
                num -= 100;
            else
                num += 100;
            break;
        case 'D':
            if ((str[i + 1] == 'M') && (i + 1) < str.length())
                num -= 500;
            else
                num += 500;
            break;
        case 'M':
            if (str[i] == 'M')
                num += 1000;
            break;

        }
    }
    return num;
}