#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string str = "0111100010",temp="";

    int zeros = 0;
    int ones  = 0;

    for(int i=0;i<str.length();i++){

        if(str[i]=='0')
        zeros++;

        if(str[i]=='1')
        ones++;

        temp = temp + str[i];

        if(zeros == ones){
            cout<<temp<<" ";
            temp = "";
            zeros = 0;
            ones = 0;
        }
    }
    return 0;
}