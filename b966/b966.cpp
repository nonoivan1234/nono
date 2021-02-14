#include<bits/stdc++.h>
#include<limits.h>
#define nono_is_handsome ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int arr[10000000];
int n,a,b,c=0,max_=0,min_=INT_MAX;

int main()
{
    nono_is_handsome
	fill(arr,arr+9999999,0);
	cin>>n;
	for (int i=0;i<n;i++){
        cin>>a>>b;
        if(b>max_){
            max_ = b;
        }
        if(a<min_){
            min_=a;
        }
        for (int j=a;j<b;j++){
            arr[j]=1;
        }
	}
	for (int i=min_;i<max_;i++){
        if (arr[i]==1){
            c+=1;
        }
	}
	cout<<c;
	return 0;
}
