// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
private:
public:
    int minSwaps(vector<int> &nums)
    {
        // Code here

        int swaps = 0, n = nums.size();

        vector<int> a = nums;

        map<int, int> pos;

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++)
            pos[nums[i]] = i;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] != a[i])
            {
                swaps++;
                int change = nums[i];

                int temp = nums[i];
                nums[i] = nums[pos[a[i]]];
                nums[pos[a[i]]] = temp;

                pos[change] = pos[a[i]];
                pos[a[i]] = i;
            }
        }
        return swaps;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution obj;
        int ans = obj.minSwaps(nums);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends