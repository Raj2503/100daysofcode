#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    unordered_map<char,int> freq;
    string s = "RAJ ARYAN";

    for(int i=0;i<s.size();i++)
    if(s[i]!=' ')
    freq[s[i]]++;

    for(auto i : freq)
    cout<<i.first<<" "<<i.second<<endl;
}