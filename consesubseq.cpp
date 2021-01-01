// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}// } Driver Code Ends


// arr[] : the input array
// N : size of the array arr[]

// return the length of the longest subsequene of consecutive integers
int findLongestConseqSubseq(int arr[], int N)
{
  //Your code here
  set<int> a;
  
  for(int i=0;i<N;i++)
  a.insert(arr[i]);
int len=1,maxlen=1;

  for(auto it=a.begin();it!=a.end();++it) {
      auto d = it;
    if((*it+1)==*(++d))
    len++;

    else
    {
      /* code */
      maxlen = max(len,maxlen);
      len=1;
    }
    
  }

    return maxlen;
}