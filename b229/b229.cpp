#include<bits/stdc++.h>
#define nono_is_handsome ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{
	nono_is_handsome
    int n;
    unsigned long long int arr[50];
    arr[0]=1;
    arr[1]=3;
    scanf("%d",&n);
    for (int i=2;i<n+1;i++){
        arr[i] = 2*arr[i-1]+arr[i-2];
    }
    cout<<arr[n]<<endl;
	return 0;
}
