// { Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << PalinArray(a, n) << endl;
    }
} // } Driver Code Ends

/*Complete the function below*/
int PalinArray(int a[], int n)
{ //add code here.
    int i, j, rev = 0, temp = 0;
    int b = 0;

    for (i = 0; i < n; i++)
    {
        rev = 0;
        temp = a[i];
        while (temp != 0)
        {
            b = temp % 10;
            rev = rev * 10 + b;
            temp /= 10;
        }
        if (rev != a[i])
            return 0;
    }
    return 1;
}