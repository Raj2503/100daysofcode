#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--) {
        int n,x;
        cin>>n>>x;
        int a[n],i;

        for(i=0;i<n;i++)
        cin>>a[i];

        int start=0,end=0,len=n-1,sum=0;

        while(end<n) {

            while(sum <=x && end <n)
                sum+=a[end++];

            while(sum>x&&start <n)
            {
                if(end-start<len)
                len = end - start;

                sum-=a[start++];
            }
        }

        cout<<len<<endl;
    }
}