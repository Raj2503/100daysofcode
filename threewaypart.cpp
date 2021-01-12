#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int Cond(int x, int a)
{
    return x < a;
}

int main()
{
    int n, a, b, i;
    cin >> n >> a >> b;
    vector<int> array;

    for (i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }

    int low = 0, mid = 0, high = n - 1, temp;

    while (mid <= high)
    {
        if (array[mid] < a)
        {
            temp = array[mid];
            array[mid] = array[low];
            array[low] = temp;
            low++;
            mid++;
        }
        else if (array[mid] > b)
        {
            temp = array[mid];
            array[mid] = array[high];
            array[high] = temp;
            high--;
        }
        else
            mid++;

        // cout << endl;
        // for (int i = 0; i < array.size(); i++)
        //     cout << array[i] << " ";
        // cout << endl;
    }
    // int x = -1;

    // for (i = 0; i < array.size(); i++)
    // {
    //     if (array[i] < a)
    //     {
    //         ++x;
    //         int temp = array[i];
    //         array[i] = array[x];
    //         array[x] = temp;
    //     }
    // }

    // for (int i = 0; i < array.size(); i++)
    //     cout << array[i] << " ";
    //     cout<<endl;

    // for (i = x + 1; i < array.size(); i++)
    // {
    //     if (array[i] < b)
    //     {
    //         ++x;
    //         int temp = array[i];
    //         array[i] = array[x];
    //         array[x] = temp;
    //     }
    // }
    if(n>4)
    swap(array[low],array[high-1]);
    // cout<<array[low]<<" "<<array[mid]<<" "<<array[high]<<endl;

    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";
}