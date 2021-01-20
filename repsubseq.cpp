// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    unordered_map<string,int> freq;
            string temp="";
		    for(int i=0;i<str.length();i++) {
                if(str[i]!=str[i-1]) {
                    freq[temp]++;
                    temp="";
                }
                else {
                    temp += str[i];
                }
            }
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends