#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;

    vector<int> arr(n);

    for(ll i=0;i<n;i++)
    cin>>arr[i];

    multiset<ll> last; 
  
    // last element in each  increasing subsequence  
    // found so far 
    for (ll i = 0; i < n; i++) { 
  
        // here our current element is arr[i] 
        multiset<ll>::iterator it = last.lower_bound(arr[i]); 
  
        // iterator to the first element larger  
        // than or equal to arr[i] 
        if (it == last.begin()) 
  
            // if all the elements in last larger 
            // than or to arr[i] then insert it into last 
            last.insert(arr[i]); 
  
        else { 
            it--; 
  
            // the largest element smaller than arr[i] is the number 
            // before *it which is it-- 
            last.erase(it); // erase the largest element smaller than arr[i] 
            last.insert(arr[i]); // and replace it with arr[i] 
        } 
    } 
    cout<< last.size()<<endl;
}
return 0;
}