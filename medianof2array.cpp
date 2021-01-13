#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double findMedianOfSortedArr(vector<int> input1, vector<int> input2)
{
    if (input1.size() > input2.size())
        return findMedianOfSortedArr(input2, input1);

    int x = input1.size();
    int y = input2.size();

    int low = 0, high = x;

    while (low <= high)
    {
        int partitionX = (low + high) / 2;
        int partitionY = (x + y + 1) / 2 - partitionX;

        int maxLeftX = (partitionX == 0) ? INT_MIN : input1[partitionX - 1];
        int minRightX = (partitionX == x) ? INT_MAX : input1[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : input2[partitionY - 1];
        int minRightY = (partitionY == y) ? INT_MAX : input2[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX)
        {
            if ((x + y) % 2 == 0)
                return ((double)max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2;
            else
                return (double)max(maxLeftX, maxLeftY);
        }
        else if (maxLeftX > minRightY)
            high = partitionX - 1;
        else
            low = partitionX + 1;
    }

    throw invalid_argument("...");
}

int main()
{
    vector<int> a = {23, 26, 31, 35};
    vector<int> b = {3, 5, 7, 9, 11, 16};

    double median = findMedianOfSortedArr(a, b);
    cout << median;
    return 0;
}