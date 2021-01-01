// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

//User function template for C++
class Solution
{
public:
    // Function to find maximum product subarray
    long long maxProduct(int *arr, int n)
    {
        // code here
        // Variables to store maximum and minimum 
    // product till ith index. 
    long long int minVal = arr[0]; 
    long long int maxVal = arr[0]; 
  
    long long int maxProduct = arr[0]; 
  
    for (int i = 1; i < n; i++) { 
  
        // When multiplied by -ve number, 
        // maxVal becomes minVal 
        // and minVal becomes maxVal. 
        if (arr[i] < 0) 
            swap(maxVal, minVal); 
  
        // maxVal and minVal stores the 
        // product of subarray ending at arr[i]. 
        // maxVal = max(arr[i], maxVal * arr[i]); 

        if(arr[i]>maxVal * arr[i])
        maxVal = arr[i];
        else
        maxVal= maxVal * arr[i];

        if(arr[i]< minVal * arr[i])
        minVal = arr[i];
        else
        minVal =  minVal * arr[i];
        // minVal = min(arr[i], minVal * arr[i]); 
  
        // Max Product of array. 
        maxProduct = max(maxProduct, maxVal); 
    } 
  
    // Return maximum product found in array. 
    return maxProduct; 
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends
  // #include <bits/stdc++.h>
  // #define ll long long int
  // using namespace std;

// int main()
// {
//     int n, i;
//     cin >> n;
//     int a[n];

//     for (i = 0; i < n; i++)
//         cin >> a[i];
//     int mul = 1, ma = a[0],result=0;
//     for (i = 0; i < n; i++)
//     {
//         mul=a[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             result = max(mul,result);
//             mul = mul*a[j];
//         }
//         result = max(result,mul);
//     }

//     cout<<result;

//     return 0;
// }