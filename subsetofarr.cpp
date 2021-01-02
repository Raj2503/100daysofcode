#include<set>
#include<iostream>

// bool isSubset(int arr1[], int arr2[],  
//               int m, int n) 
// { 
//     int i = 0, j = 0; 
  
//     if (m < n) 
//         return 0; 
  
//     // Sort both the arrays 
//     sort(arr1, arr1 + m); 
//     sort(arr2, arr2 + n); 
  
//     // Iterate till they donot exceed their sizes 
//     while (i < n && j < m)  
//     { 
//         // If the element is smaller than 
//         // Move aheaad in the first array 
//         if (arr1[j] < arr2[i]) 
//             j++; 
//         // If both are equal, then move  
//         // both of them forward 
//         else if (arr1[j] == arr2[i])  
//         { 
//             j++; 
//             i++; 
//         } 
  
//         // If we donot have a element smaller 
//         // or equal to the second array then break 
//         else if (arr1[j] > arr2[i]) 
//             return 0; 
//     } 
  
//     return (i < n) ? false : true; 
// } 

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>m>>n;
        set<int> a;

        for(int i=0;i<m;i++)
        {
            int temp;
            cin>>temp;
            a.insert(temp);
        }
        bool isNot = false;
        for(int i=0;i<n;i++) {
            int temp;

            cin>>temp;
            if(a.find(temp)==a.end())
            isNot=true;
        }

        if(isNot)
        cout<<"No\n";
        else
        cout<<"Yes\n";
    }
}