#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string str[] = {"2", "22", "222",
                    "3", "33", "333",
                    "4", "44", "444",
                    "5", "55", "555",
                    "6", "66", "666",
                    "7", "77", "777", "7777",
                    "8", "88", "888",
                    "9", "99", "999", "9999"};

    string s = "GEEKSFORGEEKS";
    string num = "";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==' ')
        num+= '0';
        else {
            int pos = s[i] -'A';
            num+= str[pos];
        }
    }

    cout << num;
    return 0;
}