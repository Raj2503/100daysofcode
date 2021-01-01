#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int q=2;
        int arr[100000] = {0};
        arr[0] = 1;
        int len = 1;
        int i = 0;
        int num = 0;
        
        while(q<=n){
            i = 0;
            num = 0;
            while(i<len) {
                arr[i] = arr[i]*q;
                arr[i] = arr[i] + num;
                num = arr[i]/10;
                arr[i] = arr[i]%10;
                i++;
            }
            while(num!=0){
                arr[len] = num%10;
                num = num/10;
                len++;
            }
            q++;
        }
        len--;
        while(len>=0){
            cout<<arr[len];
            len = len-1;
        }
        cout<<endl;
    }
	return 0;
}