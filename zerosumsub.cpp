// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>

using namespace std;

#define ll long long 
ll findSubarray(vector<ll> , int );

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        
        cout << findSubarray(arr,n) << "\n";
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array 
// n : size of the given array
ll findSubarray(vector<ll> arr, int n ) {
    //code here

    unordered_map<int, vector<int> > map; 

    vector <pair<int, int>> out; 
   

    int sum = 0; 
   
    for (int i = 0; i < n; i++) 
    { 

        sum += arr[i]; 

        if (sum == 0) 
            out.push_back(make_pair(0, i)); 
   
 
        if (map.find(sum) != map.end()) 
        { 

            vector<int> vc = map[sum]; 
            for (auto it = vc.begin(); it != vc.end(); it++) 
                out.push_back(make_pair(*it + 1, i)); 
        } 
 
        map[sum].push_back(i); 
    } 

    return out.size(); 
}
