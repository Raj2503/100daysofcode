#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<string> a;

void find(string s, string ans)
{
    if (s.length() == 0)
    {
        a.push_back(ans);
        return;
    }

    find(s.substr(1), ans + s[0]);

    find(s.substr(1), ans);
}

int main()
{
    string s = "abc";
    find(s,"");
    for(auto i:a){
        cout<<i<<endl;
    }
    return 0;
}