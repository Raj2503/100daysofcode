#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string validIP(string IP)
{
    regex v4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
    if (regex_match(IP, v4))
        return "IPv4";

    regex v6("((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");
    if (regex_match(IP, v6))
        return "IPv6";

    return "Neither";
}

int main()
{
    string str = "250.11.255.255";
    cout<<validIP(str);
    return 0;
}