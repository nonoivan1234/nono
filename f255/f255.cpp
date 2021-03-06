#include<iostream>
#define nono_is_handsome ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main()
{

    long long int tb[10000],n,temp=1;
    tb[0]=1;
    while(cin>>n){
        if (n==0)   break;
        if (n>=temp){
            for (long int i=temp;i<=n;i++){
                tb[i]=tb[i-1]*2;
            }

            temp = n;
        }
        cout<<tb[n]<<"\n";
    }
	return 0;
}
