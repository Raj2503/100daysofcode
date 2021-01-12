#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int getMaxArea(int arr[], int n)
{
    stack<int> s;

    int max_area = 0;
    int top;
    int area_top;

    int i = 0;
    while (i < n)
    {
        if (s.empty() || arr[s.top()] <= arr[i])
            s.push(i++);
        else
        {
            top = s.top();
            s.pop();

            area_top = arr[top] * (s.empty() ? i : i - s.top() - 1);

            if (max_area < area_top)
                max_area = area_top;
        }
    }

    while (s.empty() == false)
    {
        top = s.top();
        s.pop();

        area_top = arr[top] * (s.empty() ? i : i - s.top() - 1);

        if (max_area < area_top)
            max_area = area_top;
    }

    return max_area;
}
int main()
{
    int arr[] = {6, 2, 5, 4, 5, 1, 6};
    int n = 7;
    cout << getMaxArea(arr, n);
    return 0;
}