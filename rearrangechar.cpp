#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        unordered_map<char,int> a;
        int maxchar=INT_MIN;

        for(int i=0;i<str.length();i++){
            a[str[i]]++;
            maxchar = max(maxchar,a[str[i]]);
        }

        if(maxchar>(str.length()/2))
        cout<<0<<endl;
        else 
        cout<<1<<endl;
    }
return 0;
}